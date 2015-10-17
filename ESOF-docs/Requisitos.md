
#Requisitos
===============
Verificamos que no projeto em análise os "developers" podem ter duas funções principais no desenvolver no projeto, corrigir os erros que os módulos apresentam ou, por outro lado, tentar implementar as funcionalidades da aplicação que se encontram em falta mediante os requisitos estabelecidos.
Os requisitos são definidos inicialmente, porém muitos requisitos vão sendo adicionados a meio do projeto, sendo que estes precisam de uma "processo" bem estruturado para que se possa perceber se o novo requisito é pertinente e benéfico para o desenvolvimento do projeto.


#Validação por parte do responsável do projeto

O projeto está dividido em módulos que são distribuidos pelos vários contribuidores. Cada um desses módulos foca-se numa característica que o projeto deve implementar, sendo que quando esse módulo está completo (bem implementado) passa por um processo de integração no projeto principal. Esse processo é gerido pelos contribuidores principais do projeto, [Yuri Kunde Schlesner](https://github.com/yuriks), e também [Bunnei](https://github.com/bunnei). Estes contribuidores têm como função testar os diferentes módulos, ou então delegar contribuidores para analisar os mesmos, contribuidores estes que normalmente são os que estão mais dentro do assunto que o módulo aborda. Finalmente, é feito o merge do código que se encontra no módulo para o projeto.


Em conversa com um dos contribuidores principais do grupo ([Yuri Kunde Schlesner](https://github.com/yuriks)) reunimos as respostas apresentadas seguidamente, para as questões que achamos pertinentes sobre requisitos no projeto **[Citra](http://citra-emu.org/)**:

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