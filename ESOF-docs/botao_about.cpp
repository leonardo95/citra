//https://www.youtube.com/watch?v=4QoQZ0trJ1s
//https://www.youtube.com/watch?v=NZkpp-a-tYA


#include <windows.h>


#define ID_BUTTON 1
// Declare Windows Procedure
LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

// The main window class name
char szClassName[ ] = "WindowsApp";

// The main window class name
char szTitle[ ] = "About";

int WINAPI WinMain(HINSTANCE hThisInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR lpszArgument,
                   int nFunsterStill)
{
	HWND hwnd;
	MSG messages;
    WNDCLASSEX wincl;		//wcex Data structure foe the windows class

    //Window structure
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;
    wincl.style = CS_DBLCLKS; 			//wincl.style = CS_HREDRAW | CS_VREDRAW;
    wincl.cbSize = sizeof(WNDCLASSEX);

    //Use default icon and mouse-pointer
    wincl.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wincl.hIconSm = LoadIcon(NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor(NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;
	wincl.cbClsExtra     = 0;
    wincl.cbWndExtra     = 0;
    
    //Windows default background of the window
    wincl.hbrBackground  = GetSysColorBrush(COLOR_3DFACE);

    if (!RegisterClassEx(&wincl))
    {
        return 0;
    }


    HWND hWnd = CreateWindow(
        0,
        szClassName,
        szTitle,
        WS_SYSMENU,		//WS_OVERLAPPEDWINDOW,
        CW_USEDEFAULT, 
        CW_USEDEFAULT,
        544,	//500
        375,	//100
        HWND_DESKTOP,
        NULL,
        hThisInstance,
        NULL
    );

    // Make the window visible
    // hWnd: the value returned from CreateWindow
    // nFunsterStill: the fourth parameter from WinMain
    ShowWindow(hWnd, nFunsterStill);
    
	//UpdateWindow(hWnd);

    while (GetMessage(&messages, NULL, 0, 0))
    {
        TranslateMessage(&messages);	//Translate virtual-key messages into character messages
        DispatchMessage(&messages);		//Send message to WindowProcedure
    }

    return messages.wParam;
}

//  Function WndProc(HWND, UINT, WPARAM, LPARAM)
//  Processes messages for the main window.
LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
    	case WM_CREATE:
            
            HMENU hMenubar = CreateMenu();
            HMENU hFile = CreateMenu();
            HMENU hOptions = CreateMenu();
            
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hFile /* id of the menu item --> to not interact with the menu*/, "File");

            AppendMenu(hFile, MF_STRING, NULL , "Exit");


            SetMenu(hwnd, hMenubar);
            /*
       		hButton = CreateWindow(TEXT("button"),TEXT("About"),
                WS_VISIBLE | WS_CHILD,
                10,		//X position of the button 
                10, 	//Y position of the button
                80, 	//width of the button
                25,		//weight of the button
                hWnd, (HMENU) ID_BUTTON, NULL, NULL
                );*/
      	    break;

		case WM_COMMAND:

			if(LOWORD(wParam) == /*ID_BUTTON*/ ((UINT_PTR) hFile))
			{
				MessageBox(hWnd, " Citra \n 
					Nintendo 3DS emulator \n 
					open source development \n 
					Visit us at: http://citra-emu.org/ ", 
                    "About Citra", MB_OK | MB_ICONINFORMATION);
			}
		    break;
		
        case WM_DESTROY:
            PostQuitMessage(0);
            break;

        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
		}

    return 1;
}