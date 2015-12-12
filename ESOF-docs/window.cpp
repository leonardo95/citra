#include <windows.h>
#include <iostream>
#include "MMSystem.h"

using namespace std;

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		case WM_CREATE:{
			HMENU hMenubar = CreateMenu();
            HMENU hFile = CreateMenu();
			HMENU hEmulation = CreateMenu();
			HMENU hView = CreateMenu();
			HMENU hHelp = CreateMenu();
            HMENU hSound = CreateMenu();
            
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hFile /* id of the menu item */, "File");
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hEmulation /* id of the menu item */, "Emulation");
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hView /* id of the menu item */, "View");
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hSound /* id of the menu item */, "Sound");
            AppendMenu(hMenubar, MF_POPUP /*style*/, (UINT_PTR) hHelp /* id of the menu item */, "Help");
			
			AppendMenu(hHelp, MF_STRING, 1 , "About Citra");
			
            AppendMenu(hSound, MF_STRING, 2 , "Sound ON");
			AppendMenu(hSound, MF_STRING, 3 , "Sound OFF");
			AppendMenu(hSound, MF_STRING, 4 , "Sound Settings");
			
			
            SetMenu(hwnd, hMenubar);
			break;
		}
		
		case WM_COMMAND: {
			
			bool music = true;
			
			if(LOWORD(wParam) == /*ID_BUTTON*/ 1)
			{
				const char *text =
  						"Citra\n"
						"Nintendo 3DS emulator\n"
						"open source development\n" 
						"Visit us at: http://citra-emu.org/";
				MessageBox(hwnd, text, "About Citra", MB_OK | MB_ICONINFORMATION);
			}
			
			if(LOWORD(wParam) == 2)
			{
				/*if(music){
					PlaySound(TEXT("music.wav"), NULL,SND_SYNC | SND_FILENAME | SND_LOOP);
				}*/
					
				//Super Mario song introduction
				Beep (330,100);Sleep(100);
		        Beep (330,100);Sleep(200);
		        Beep (330,100);Sleep(200);
		        Beep (262,100);Sleep(100);
		        Beep (330,100);Sleep(200);
		        Beep (392,100);Sleep(500);
		        Beep (196,100);Sleep(500);
			        
				if(music)
				{	
					//Super Mario Song
					
					Beep (262,300);Sleep(200);
			        Beep (196,300);Sleep(200);
			        Beep (164,300);Sleep(100);
			        Beep (220,300);Sleep(100);
			        Beep (246,100);Sleep(200);
			        Beep (233,200);
		
					Beep (220,100);Sleep(200);
			        Beep (196,100);Sleep(100);
			        Beep (330,100);Sleep(100);
			        Beep (392,100);Sleep(100);
			        Beep (440,100);Sleep(200);
			        Beep (349,100);Sleep(100);
			        Beep (392,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(100);
			        Beep (247,100);Sleep(350);
			        Beep (262,300);Sleep(200);
			        Beep (196,300);Sleep(200);
			        Beep (164,300);Sleep(200);
			        Beep (220,300);Sleep(100);
			        Beep (246,100);Sleep(200);
			        Beep (233,200);
					
					Beep (220,100);Sleep(200);
			        Beep (196,100);Sleep(100);
			        Beep (330,100);Sleep(100);
			        Beep (392,100);Sleep(100);
			        Beep (440,100);Sleep(200);
			        Beep (349,100);Sleep(100);
			        Beep (392,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(100);
			        Beep (247,100);Sleep(1000);
			        
			        
			        Beep (392,100);Sleep(100);
			        Beep (370,100);Sleep(100);
			        Beep (349,100);Sleep(100);
			        Beep (311,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (207,100);Sleep(100);
			        Beep (220,100);Sleep(100);
			        Beep (262,100);Sleep(200);
			        Beep (220,100);Sleep(100);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(350);
			        Beep (392,100);Sleep(100);
			        Beep (370,100);Sleep(100);
			        Beep (349,100);Sleep(100);
			        Beep (311,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (523,100);Sleep(200);
			        Beep (523,100);Sleep(100);
			        Beep (523,100);Sleep(1100);
			        Beep (392,100);Sleep(100);
			        Beep (370,100);Sleep(100);
			        Beep (349,100);Sleep(100);
			        Beep (311,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (207,100);Sleep(100);
			        Beep (220,100);Sleep(100);
			        Beep (262,100);Sleep(200);
			        Beep (220,100);Sleep(100);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(350);
			        Beep (311,300);Sleep(200);
			        Beep (296,300);Sleep(200);
			        Beep (262,300);Sleep(1300);
			        Beep (262,100);Sleep(100);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(200);
			        Beep (330,200);Sleep(50);
			        Beep (262,200);Sleep(50);
			        Beep (220,200);Sleep(50);
			        Beep (196,100);Sleep(500);
			        Beep (262,100);Sleep(100);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(100);
			        Beep (330,100);Sleep(500);
			        Beep (440,100);Sleep(200);
			        Beep (392,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (294,100);Sleep(200);
			        Beep (330,200);Sleep(50);
			        Beep (262,200);Sleep(50);
			        Beep (220,200);Sleep(50);
			        Beep (196,100);Sleep(500);
			        
			        Beep (330,100);Sleep(100);
			        Beep (330,100);Sleep(200);
			        Beep (330,100);Sleep(200);
			        Beep (262,100);Sleep(100);
			        Beep (330,100);Sleep(200);
			        Beep (392,100);Sleep(500);
			        Beep (196,100);Sleep(500);
			        Beep (196,100);Sleep(100);
			        Beep (262,100);Sleep(100);
			        Beep (330,100);Sleep(100);
			        Beep (392,100);Sleep(100);
			        Beep (523,100);Sleep(100);
			        Beep (660,100);Sleep(100);
			        Beep (784,100);Sleep(450);
			        Beep (660,100);Sleep(450);
			        Beep (207,100);Sleep(100);
			        Beep (262,100);Sleep(100);
			        Beep (311,100);Sleep(100);
			        Beep (415,100);Sleep(100);
			        Beep (523,100);Sleep(100);
			        Beep (622,100);Sleep(100);
			        Beep (830,100);Sleep(450);
			        Beep (622,100);Sleep(450);
			        Beep (233,100);Sleep(100);
			        Beep (294,100);Sleep(100);
			        Beep (349,100);Sleep(100);
			        Beep (466,100);Sleep(100);
			        Beep (587,100);Sleep(100);
			        Beep (698,100);Sleep(100);
			        Beep (932,100);Sleep(450);
			        Beep (932,100);Sleep(100);
			        Beep (932,100);Sleep(100);
			        Beep (932,100);Sleep(100);
			        Beep (1046,675);
					
			    }
						
			}
			
			if(LOWORD(wParam) == 3)
			{
				music = false;
			}
			
			break;
		}
		
		
		/* trap the WM_CLOSE (clicking X) message, and actually tell the window to close */
		case WM_CLOSE: {
			DestroyWindow(hwnd);
			break;
		}
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG Msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION);

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Citra",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produre unreasonably CPU usage
	*/
	while(GetMessage(&Msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&Msg); /* Translate keycodes to chars if present */
		DispatchMessage(&Msg); /* Send it to WndProc */
	}
	return Msg.wParam;
}
