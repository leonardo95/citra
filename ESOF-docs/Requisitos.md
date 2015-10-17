
#Requisitos
===============
Verificamos que no projeto em an�lise os "developers" podem ter duas fun��es principais no desenvolver no projeto, corrigir os erros que os m�dulos apresentam ou, por outro lado, tentar implementar as funcionalidades da aplica��o que se encontram em falta mediante os requisitos estabelecidos.
Os requisitos s�o definidos inicialmente, por�m muitos requisitos v�o sendo adicionados a meio do projeto, sendo que estes precisam de uma "processo" bem estruturado para que se possa perceber se o novo requisito � pertinente e ben�fico para o desenvolvimento do projeto.


#Valida��o por parte do respons�vel do projeto

O projeto est� dividido em m�dulos que s�o distribuidos pelos v�rios contribuidores. Cada um desses m�dulos foca-se numa caracter�stica que o projeto deve implementar, sendo que quando esse m�dulo est� completo (bem implementado) passa por um processo de integra��o no projeto principal. Esse processo � gerido pelos contribuidores principais do projeto, [Yuri Kunde Schlesner](https://github.com/yuriks), e tamb�m [Bunnei](https://github.com/bunnei). Estes contribuidores t�m como fun��o testar os diferentes m�dulos, ou ent�o delegar contribuidores para analisar os mesmos, contribuidores estes que normalmente s�o os que est�o mais dentro do assunto que o m�dulo aborda. Finalmente, � feito o merge do c�digo que se encontra no m�dulo para o projeto.


Em conversa com um dos contribuidores principais do grupo ([Yuri Kunde Schlesner](https://github.com/yuriks)) reunimos as respostas apresentadas seguidamente, para as quest�es que achamos pertinentes sobre requisitos no projeto **[Citra](http://citra-emu.org/)**:

#####Quais os sistemas operativos suportados?
O projeto de GitHub Citra � suportado e testado para vers�es de 64-bits do Windows ( Windows7 e mais recentes), Linux e OS X. O projeto pode ainda funcionar noutras plataformas, no entanto estas n�o est�o a ser testadas pelos contribuidores do Citra.

===============

#####Quais s�o os requerimentos de hardware?
N�o existem requerimentos espec�ficos de hardware para o Citra - qualquer sistema x86-64 deve ser capaz de o correr sem problemas. Atualmente, o Citra inclui apenas um interpretador de n�cleo de CPU bastante lento, logo a performance n�o ser� �tima independentemente do sistema utilizado. Os requerimentos gr�ficos s�o modestos mas os drivers de video devem suportar OpenGL 3.3.

===============

#####Que tipo de testes s�o realizados normalmente?
Para os recursos de software desenvolvidos com ajuda do estilo de programa��o �heavy code RE� o colaborador principal do projeto (Yuri Kunde Schlesner), normalmente, avan�a a fase de testes assumindo que a implementa��o est� correta, fazendo uso neste ponto da sua autoridade em rela��o ao projeto.

===============

#####Neste momento, quais s�o as principais prioridades?
As principais prioridades deste projeto, e apesar de o seu desenvolvimento ser algo lento, � o de aumentar a velocidade e compatibilidade com os v�rios sistemas. N�o existe nenhum planeamento pr�vio para superar os obst�culos referidos anteriormente, no entanto, pode-se melhorar estes componentes se incluirmos um hardware inteligente que evita a sincroniza��o da GPU com o CPU, um recompilador JIT para um n�cleo ARM e a implementa��o de outros recursos que possam ainda n�o existir na GPU e Os.