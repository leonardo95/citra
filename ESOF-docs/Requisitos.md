
#**Requisitos**

Verificamos que no projeto em análise os "developers" podem ter duas funções principais no desenvolver no projeto, corrigir os erros que os módulos apresentam ou, por outro lado, tentar implementar as funcionalidades da aplicação que se encontram em falta mediante os requisitos estabelecidos.
Os requisitos são definidos inicialmente, porém muitos requisitos vão sendo adicionados a meio do projeto, sendo que estes precisam de um "processo" bem estruturado para que se possa perceber se o novo requisito é pertinente e benéfico para o desenvolvimento do projeto.


###**Validação por parte do responsável do projeto**

O projeto está dividido em módulos que são distribuidos pelos vários contribuidores. Cada um desses módulos foca-se numa característica que o projeto deve implementar, sendo que quando esse módulo está completo (bem implementado) passa por um processo de integração no projeto principal. Esse processo é gerido pelos contribuidores principais do projeto, [Yuri Kunde Schlesner](https://github.com/yuriks), e também [Bunnei](https://github.com/bunnei). Estes contribuidores têm como função testar os diferentes módulos, ou então delegar contribuidores para analisar os mesmos, contribuidores estes que normalmente são os que estão mais dentro do assunto que o módulo aborda. Finalmente, é feito o merge do código que se encontra no módulo para o projeto (Neste momento os principais contribuidores apresentam as principais tarefas dividas por diferentes graus de dificuldade numa lista disponivel no repositório).


Em conversa com um dos contribuidores principais do grupo ([Yuri Kunde Schlesner](https://github.com/yuriks)) reunimos as respostas apresentadas seguidamente, para as questões que achamos pertinentes sobre requisitos para o projeto **[Citra](http://citra-emu.org/)**:

===============

####**Requerimentos de Software/Sistema:**
- O projeto de GitHub Citra é suportado e testado para versões de 64-bits do Windows (Windows7 e mais recentes), Linux e OS X. O projeto pode ainda funcionar noutras plataformas, no entanto estas não estão a ser testadas pelos contribuidores do Citra.

===============

####**Requerimentos de Hardware:**
- Não existem requerimentos específicos de hardware para o Citra - qualquer sistema x86-64 deve ser capaz de o correr sem problemas. Atualmente, o Citra inclui apenas um interpretador de núcleo de CPU bastante lento, logo a performance não será ótima independentemente do sistema utilizado. Os requerimentos gráficos são modestos mas os drivers de video devem suportar OpenGL 3.3.

===============

####**Testes:**
- Para os recursos de software desenvolvidos com ajuda do estilo de programação “heavy code RE” o colaborador principal do projeto (Yuri Kunde Schlesner), normalmente, avança a fase de testes assumindo que a implementação está correta, fazendo uso neste ponto da sua autoridade em relação ao projeto.

===============

####**Principais prioridades:**
- As principais prioridades deste projeto, e apesar de o seu desenvolvimento ser algo lento, é o de aumentar a velocidade e compatibilidade com os vários sistemas. Não existe nenhum planeamento prévio para superar os obstáculos referidos anteriormente, no entanto, pode-se melhorar estes componentes se incluirmos um hardware inteligente que evita a sincronização da GPU com o CPU, um recompilador JIT para um núcleo ARM e a implementação de outros recursos que possam ainda não existir na GPU e OS.

===============

####**Requisitos para "build" do projeto**

- De modo a realizar "build" ao projeto, os utilizadores devem garantir que incluiram icudt53.dll, icuin53.dll, icuuc53.dll, Qt5Core.dll, Qt5Gui.dll, Qt5OpenGL.dll and Qt5Widgets.dll no diretório da aplicação, no "system path" ou em C:\Qt\5.4\msvc2013_64_opengl\bin. Caso contrário, o Citra não irá compilar, falhando a sua inicialização. 
<br>
![Alt text](https://camo.githubusercontent.com/db196e10c09f525329b84530a756f682a4e5e117/687474703a2f2f692e696d6775722e636f6d2f323157536a49332e706e673f31) 
<br>
 - O utilizador deve ainda manter platforms/qwindows.dll no diretório do ficheiro, ou em C:\Qt\5.4\msvc2013_64_opengl\plugins\platforms.
<br>
![Alt text](https://camo.githubusercontent.com/9b3d650ceca1c2f1167d0e9d73c68c3253c2e7e4/687474703a2f2f692e696d6775722e636f6d2f666f4e78646d392e706e673f31)
<br> 
 - QT 5.3 é uma falha usual no  Windows aquando do "build" do projeto. O utilizador deve instalar QT 5.3.1 (ou uma versão mais recente), de modo a corrigir este erro.

===============
 
#####**Notas adicionais:**
- "**Atention to all the users**: currently no retail games/software are fully playable on Citra. The few games that do run are slow and can suffer from glitches or bugs. Sooner or later, games will come to playable state." -**Yuri Kunde Schlesner**