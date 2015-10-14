

#Requisitos

===============


###Requisitos - Utilizador

 - For running Citra builds, users have to make sure that they included icudt53.dll, icuin53.dll, icuuc53.dll, Qt5Core.dll, Qt5Gui.dll, Qt5OpenGL.dll and Qt5Widgets.dll in either the application directory or in the system PATH. If not there those files are in C:\Qt\5.4\msvc2013_64_opengl\bin,copy them here.Else, Citra will fail on startup. 
<br>
![Alt text](https://camo.githubusercontent.com/db196e10c09f525329b84530a756f682a4e5e117/687474703a2f2f692e696d6775722e636f6d2f323157536a49332e706e673f31) 
<br>
 - Also, notice platforms/qwindows.dll in the application directory. If not there you will find it in C:\Qt\5.4\msvc2013_64_opengl\plugins\platforms by default. Just copy it.
<br>
![Alt text](https://camo.githubusercontent.com/9b3d650ceca1c2f1167d0e9d73c68c3253c2e7e4/687474703a2f2f692e696d6775722e636f6d2f666f4e78646d392e706e673f31)

> **Atention to all the users**, currently no retail games/software are fully playable on Citra. The few games that do run are slow and can suffer from glitches or bugs. Sooner or later, games will come to playable state.

#####Quais os sistemas operativos suportados?
O projeto de GitHub Citra é suportado e testado para versões de 64-bits do Windows ( Windows7 e mais recentes), Linux e OS X. O projeto pode ainda funcionar noutras plataformas, no entanto estas não estão a ser testadas pelos contribuidores do Citra.

===============

#####Quais são os requerimentos de hardware?
Não existem requerimentos específicos de hardware para o Citra - qualquer sistema x86-64 deve ser capaz de o correr sem problemas. Atualmente, o Citra inclui apenas um interpretador de núcleo de CPU bastante lento, logo a performance não será ótima independentemente do sistema utilizado. Os requerimentos gráficos são modestos mas os drivers de video devem suportar OpenGL 3.3.

===============

#####Que tipo de testes são realizados normalmente?
Para os recursos de software desenvolvidos com ajuda do estilo de programação “heavy code RE” o colaborador principal do projeto (Yuri Kunde Schlesner), normalmente, avança a fase de testes assumindo que a implementação está correta, fazendo uso neste ponto da sua autoridade em relação ao projeto.

===============

#####Neste momento, quais são as principais prioridades?
As principais prioridades deste projeto, e apesar de o seu desenvolvimento ser algo lento, é o de aumentar a velocidade e compatibilidade com os vários sistemas. Não existe nenhum planeamento prévio para superar os obstáculos referidos anteriormente, no entanto, pode-se melhorar estes componentes se incluirmos um hardware inteligente que evita a sincronização da GPU com o CPU, um recompilador JIT para um núcleo ARM e a implementação de outros recursos que possam ainda não existir na GPU e Os.