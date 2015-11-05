
#**Arquitetura de software**

Pretende-se com este relatório, uma análise à arquitetura do software do Projeto de GitHub Citra, isto é, à organização do seu sistema, aos seus componentes e respetivas relações, e também ao ambiente que se inserem e os principais conceitos na sua evolução. Para explorarmos estes conceitos, utilizamos como base o modelo 4+1 vistas da arquitectura de software que contempla a vista lógica, a vista de implementação, a vista de processo e a vista de distribuição, sendo que a vista adicional referente ao +1 é aborda os casos de utilização.

 > É de salientar que, tendo em conta a fase precoce do projeto Citra, não é possível obter diagramas com uma boa precisao.

###**Vista Lógica**

Este ponto contempla os conceitos chave do sistema em estudo, sob a forma de classes ou packages.
Apesar da boa organização que os packages e as classes aparentam ter, o grupo acordou que a melhor opção seria abordar um diagrama de packages, pois o projeto Citra é composto por um número bastante elevado de classes o que proporcionaria um diagrama bastante complexo e confuso.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/Logic_view.png)
<br>

**Core** -> É considerado dos principais pacotes e é o motor do Citra.
Utiliza threads para controlar os vários estados do emulador

**Video Core** -> Trata do rendering de toda a aplicação Citra.
Utiliza OpenGl, shaders e outras ferramentas importantes.

**Citra emu** -> Responsável pelos controlos da aplicação Citra.
Trata das configurações e do debbuger da mesma.

**Common** -> Pacote auxiliar que guarda muitas funções auxiliares.
Trata timers, memory e muitas outras funcionalidades.

**Citra** -> A par do pacote Core, este também é considerado dos pacotes mais influentes no projeto. Consegue criar uma emu window onde mostra o potencial do Citra, ainda que de uma forma limitada.

###**Implementation View**

Neste ponto pretende-se demonstrar os componentes de software e as dependencias que estes estabelecem entre si.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/Implementation_View.png)
<br>

Segundo a nossa análise do projeto, o Citra apresenta 3 componentes principais: citra, citra_qt e common. O componente citra utliza uma interface de ligação core que é correspondida pelo componente citra_qt através da interface video_core. Estas interfaces apresentam todo o código central do projeto necessário à compilação do mesmo ao nível lógico e vídeo, respetivamente.

Estes dois componentes estabelecem ainda depedências com o componente common, contendo este todo o código comum aos componentes e interfaces referidas.

###**Deployment View**


Para correr o simulador em desenvolvimento, citra, apenas precisamos de um computador cujo sistema operativo seja o Linux (Debian ou Arch), o Mac OS X ou o Windows (7 ou superior). É necessário também que o computador suporte OpenGL 3.3, e que seja portador de um sistema de x86-64 bits. Para instalar o Citra é necessário seguir os seguintes passos:

Para Linux:
	Precisamos de fazer download e instalação dos seguintes programas:
	
	GLFW (tested with v3.0.4)
		Deb: You should probably build this from source. Directions are below.
		Arch: pacman -S glfw
	Qt
		Deb: apt-get install qtbase5-dev libqt5opengl5-dev or apt-get install libqt4-dev libqt4-opengl-dev
		Arch: pacman -S qt5 or pacman -S qt4
	GCC v4.7+ (for C++11 support)
		Deb: apt-get install build-essential
		Arch: pacman -S base-devel
	CMake
		Deb: apt-get install cmake
		Arch: pacman -S cmake


	Fazer build do programa GLFW:

	No Debian, instalae as dependencias com o comando "apt-get install xorg-dev libglu1-mesa-dev.". Posteriormente compilar com:
		git clone https://github.com/glfw/glfw.git
		cd glfw
		mkdir build && cd build
		cmake -DBUILD_SHARED_LIBS=ON ..
		make
		sudo make install
	No Arch Linux, podemos usar "pacman -S glfw".

	Fazer build do Citra:
		mkdir build
		cd build
		cmake ..
		make
		sudo make install (currently doesn't work, needs to be fixed)

	Fazer build com os simbolos de debug:
		cmake .. -DCMAKE_BUILD_TYPE=RelWithDebInfo
		make

	Correr sem instalar:
		cd data
		../build/src/citra_qt/citra-qt
	
	Debugging:
		cd data
		gdb ../build/src/citra_qt/citra-qt
		(gdb) run
		<crash>
		(gdb) bt


Para MAC OS X:
	É recomendado instalar as seguintes dependencias:
		pkg-config (brew install pkgconfig)
		GLFW (brew tap homebrew/versions, brew install glfw3)
		Qt5 (brew install qt5)
		CMake (brew install cmake)


	Fazer build GLFW  a partir da origem:
		git clone https://github.com/glfw/glfw.git
		cd glfw
		mkdir build && cd build
		cmake ..
		make
		sudo make install
	
	CMake:
		mkdir build
		cd build
		cmake .. -GXcode
		
		Opcionalmente, podemos usar "cmake -i .. -GXcode" ou "ccmake .. -GXcode" para ajustar as várias opções (por ex, desativar o Qt GUI).

	Fazer build com os simbolos de debug:
		cmake .. -GXcode -DCMAKE_BUILD_TYPE=Debug

	Fazer build do Citra:
		Abrir o ficheiro do projeto em Xcode, trocar o target de "ALL_BUILD" para "citra" ou "citra_qt", e pressionar a tecla de jogar. Por outro lado, o projeto também pode ser corrido usando o comando:
			xcodebuild -config Release -project citra.xcodeproj -target citra-qt

Para Windows:
	Instalar os seguintes programas:
		CMake
		Git
		Visual Studio 2015


###**Casos de Utilização**

Os casos de utilização relacionam as restantes vistas, mostrando as relações entre os vários componentes do sistema.
Nesta fase o projeto Citra, dado que ainda se encontra em desenvolvimento, apenas consegue fazer build e correr alguns jogos apresentando alguma lentidão e com algum flick.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/Use_case_view.PNG)
<br>

###**Notas adicionais**

Durante a formulação deste relatório não obtivemos resposta a dúvidas colocadas aos colaboradores do projeto.