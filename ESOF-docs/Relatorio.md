


**Descri��o do Projeto**
===============
**[Citra](http://citra-emu.org/)** � um emulador/debugger, em fase de desenvolvimento, da consola Nintendo 3DS escrito em C++.

No seu estado atual � maioritariamente usado para executar *homebrews* (aplica��es criadas/alteradas pelos pr�prios utilizadores), visto que a sua capacidade de correr jogos comerciais ainda se encontra pouco evolu�da.

**Contribuidores:**

O projeto citra-emulator � conduzido por cerca de 47 utilizadores que contribuem para o desenvolvimento do mesmo, no entanto, apenas alguns, neste caso 4 membros, mostram uma grande influencia no que toca a esfor�o e planeamento das tarefas.**

Principais membros**:**

Nota**: Tendo em conta que a informa��o relativa a cada membro do projeto era muito limitada n�o foi poss�vel obter uma analise precisa sobre cada um.

� **Bunnei** � Neste momento pode-se dizer que foi aquele que mais contribui para o projeto. Apresenta cerca de 608 commits.

Contribui para o desenvolvimento do debbuger do emulador 3DS, para o site do [citra](http://citra-emu.org/), para alguns programas uteis para a 3DS homebrew entre muitas outras componentes.

Para al�m de estar envolvido envolvido no projeto citra tamb�m participa no projeto dolphin (emulador Wii/GameCube);

� **Lioncash** � Contribui com 325 commits e vive no canada.

Contribui para o aperfei�oamento do debbuger do emulador 3DS e para outras configura��es do sistema para Windows.

Est� envolvido em projetos como  LiveSplit (programa que ajuda os corredores a controlar os momentos da corrida com recurso ao Timer);

� **Yuri Kunde Schlesner** � Mais conhecido como yuriks, participou com 312 commits e vive no Brasil.

Contribui para o aperfei�oamento do debbuger do emulador 3DS, de v�rias bibliotecas importantes para o funcionamento do citra e para outros utilit�rios do citra.

Est� envolvido em projetos como Ctrulib (biblioteca que ajuda a criar uma interface eficiente com o sistema 3DS) and GBA Emulator (emulador que corre jogos do game boy advance);

� **Tony Wasserka** � Conhecido como neobrain, contribuiu com 211 commits.

Tal como o membro bunnei, este presente no desenvolvimento do debbuger do emulador 3DS assim como no aperfei�oamento do site do citra.

Para novos contribuidores que possam vir a mostrar-se interessados est�o organizados ficheiros no reposit�rio com regras para organizar melhor o c�digo, tal como uma lista ToDo que est� a ser constantemente atualizada.

No que toca a ferramentas para ajudar no desenvolvimento do projeto s�o utilizadas, entre outras:
- devkitARM(Toolchain para compilar homebrew)
- CTR User Library (Biblioteca para escrever c�digo for writing usermode arm11 code for the 3DS)
- picasso and nihstro (Assemblers para c�digo de shaders para o GPU PICA200 utilizado na 3DS)

O projeto est� licenciado pela [licen�a GPLv2](https://github.com/citra-emu/citra/blob/master/license.txt).


**Descri��o dos Processos**
===============
**[Citra](http://citra-emu.org/)** utiliza dois processos de desenvolvimento de software: *Agile Development* e *Code and Fix*.

� *Agile Development* � Este processo de desenvolvimento de software, presente no **[Citra](http://citra-emu.org/)** afirma que, o projeto final consiste na uni�o de diferentes m�dulos desenvolvidos por diferentes contribuidores que se encontram em permanente comunica��o, resultando numa resposta r�pida face a problemas encontrados e num desenvolvimento gradual e adaptativo.

"The project can reasonably be divided in several "modules", and while many people work on most parts of the code at some point or another, we usually communicate to avoid making large changes in the same pats of the code at the same time, in order to avoid merge conflicts later."

								Yuriks, em email recebido.

� *Code and Fix* � Este processo, por sua vez, visa uma programa��o imediata por parte dos contribuidores e um tratamento posterior aquando da exist�ncia de erros. Tamb�m conhecido como "Comboy coding", basea-se numa programa��o sem um design planeado, que visa a otimiza��o do projeto atrav�s de uma futura corre��o de eventuais bugs.


**Analise Critica**
===============

O processo *Agile development* foi usado na medida em que, enquanto uns contribuidores tratavam da parte mais funcional do jogo (um m�dulo focado na parte do emissor do emulador), outros focaram-se na mem�ria e no modo em como tudo � armazenado pelo emulador (um m�dulo em que se desenvolvem e organizam os layouts da mem�ria, trabalhando na sua infraestrutura). Por outro lado, tamb�m � poss�vel perceber que alguns contribuidores do projeto focaram-se na forma como os registos s�o realizados concentrando-se na estrutura onde estes se encontram. Visto isto, percebemos que foi gra�as a este processo, que foi poss�vel progredir no projeto de forma organizada pois a constante comunica��o favoreceu o trabalho mais eficiente por parte de cada contribuidor, uma vez que cada um destes possui uma quantidade controlada de trabalho a desenvolver. 

Por�m, nem sempre isto se verificou, pelo que numa fase inicial do projeto o processo utilizado foi o processo *Code and Fix*. Este processo foi implementado para que o desenvolvimento de c�digo fosse algo r�pido, o que naquela fase era importante para o desenvolver do mesmo. De outra forma, � de f�cil perce��o que haveriam outros processos que poderiam ser adequados ao desenvolvimento inicial do projeto, e talvez at� mais eficientes a longo prazo. Temos como exemplo, o processo *Incremental development and delivery* que desenvolve o sistema em incrementos e vai avaliando cada incremento antes de proceder para o pr�ximo.

O processo *Software Prototyping*, que se baseia na cria��o de uma vers�o inicial do projeto, demonstrando os conceitos e tentando v�rios designs, tamb�m poderia ser utilizado neste projeto, porque era uma forma eficiente de reduzir algumas incertezas que possam haver antes de se avan�ar para desenvolvimentos algo dispendiosos para o projeto.

Primeiramente, verificamos que os contribuidores foram algo desleixados com a utiliza��o de processos bem definidos, pelo que o seu rendimento n�o foi m�ximo. Todavia, aquando de uma esp�cie de introspe��o, quando o trabalho foi dividido em diferentes m�dulos o rendimento aumenta visto que, havendo uma boa comunica��o e uma boa reflex�o entre contribuidores, a divis�o levou a um esclarecimento do papel que cada contribuidor tem no projeto.
Assim sendo, e analisando tudo o que foi realizado at� agora no projeto, podemos concluir que um planeamento pr�vio das tarefas a desempenhar assim como dos processos a utilizar s�o bastante importantes no desenvolvimento de um trabalho, pois sem estes n�o h� uma estrutura a seguir, e sem essa estrutura o desenvolvimento do projeto n�o pode ser otimizado.  	