


**Descrição do Projeto**
===============
**[Citra](http://citra-emu.org/)** é um emulador/debugger, em fase de desenvolvimento, da consola Nintendo 3DS escrito em C++.

No seu estado atual é maioritariamente usado para executar *homebrews* (aplicações criadas/alteradas pelos próprios utilizadores), visto que a sua capacidade de correr jogos comerciais ainda se encontra pouco evoluída.

**Contribuidores:**

O projeto citra-emulator é conduzido por cerca de 47 utilizadores que contribuem para o desenvolvimento do mesmo, no entanto, apenas alguns, neste caso 4 membros, mostram uma grande influencia no que toca a esforço e planeamento das tarefas.**

Principais membros**:**

Nota**: Tendo em conta que a informação relativa a cada membro do projeto era muito limitada não foi possível obter uma analise precisa sobre cada um.

¦ **Bunnei** – Neste momento pode-se dizer que foi aquele que mais contribui para o projeto. Apresenta cerca de 608 commits.

Contribui para o desenvolvimento do debbuger do emulador 3DS, para o site do [citra](http://citra-emu.org/), para alguns programas uteis para a 3DS homebrew entre muitas outras componentes.

Para além de estar envolvido envolvido no projeto citra também participa no projeto dolphin (emulador Wii/GameCube);

¦ **Lioncash** – Contribui com 325 commits e vive no canada.

Contribui para o aperfeiçoamento do debbuger do emulador 3DS e para outras configurações do sistema para Windows.

Está envolvido em projetos como  LiveSplit (programa que ajuda os corredores a controlar os momentos da corrida com recurso ao Timer);

¦ **Yuri Kunde Schlesner** – Mais conhecido como yuriks, participou com 312 commits e vive no Brasil.

Contribui para o aperfeiçoamento do debbuger do emulador 3DS, de várias bibliotecas importantes para o funcionamento do citra e para outros utilitários do citra.

Está envolvido em projetos como Ctrulib (biblioteca que ajuda a criar uma interface eficiente com o sistema 3DS) and GBA Emulator (emulador que corre jogos do game boy advance);

¦ **Tony Wasserka** – Conhecido como neobrain, contribuiu com 211 commits.

Tal como o membro bunnei, este presente no desenvolvimento do debbuger do emulador 3DS assim como no aperfeiçoamento do site do citra.

Para novos contribuidores que possam vir a mostrar-se interessados estão organizados ficheiros no repositório com regras para organizar melhor o código, tal como uma lista ToDo que está a ser constantemente atualizada.

No que toca a ferramentas para ajudar no desenvolvimento do projeto são utilizadas, entre outras:
- devkitARM(Toolchain para compilar homebrew)
- CTR User Library (Biblioteca para escrever código for writing usermode arm11 code for the 3DS)
- picasso and nihstro (Assemblers para código de shaders para o GPU PICA200 utilizado na 3DS)

O projeto está licenciado pela [licença GPLv2](https://github.com/citra-emu/citra/blob/master/license.txt).


**Descrição dos Processos**
===============
**[Citra](http://citra-emu.org/)** utiliza dois processos de desenvolvimento de software: *Agile Development* e *Code and Fix*.

¦ *Agile Development* – Este processo de desenvolvimento de software, presente no **[Citra](http://citra-emu.org/)** afirma que, o projeto final consiste na união de diferentes módulos desenvolvidos por diferentes contribuidores que se encontram em permanente comunicação, resultando numa resposta rápida face a problemas encontrados e num desenvolvimento gradual e adaptativo.

"The project can reasonably be divided in several "modules", and while many people work on most parts of the code at some point or another, we usually communicate to avoid making large changes in the same pats of the code at the same time, in order to avoid merge conflicts later."

								Yuriks, em email recebido.

¦ *Code and Fix* – Este processo, por sua vez, visa uma programação imediata por parte dos contribuidores e um tratamento posterior aquando da existência de erros. Também conhecido como "Comboy coding", basea-se numa programação sem um design planeado, que visa a otimização do projeto através de uma futura correção de eventuais bugs.


**Analise Critica**
===============

O processo *Agile development* foi usado na medida em que, enquanto uns contribuidores tratavam da parte mais funcional do jogo (um módulo focado na parte do emissor do emulador), outros focaram-se na memória e no modo em como tudo é armazenado pelo emulador (um módulo em que se desenvolvem e organizam os layouts da memória, trabalhando na sua infraestrutura). Por outro lado, também é possível perceber que alguns contribuidores do projeto focaram-se na forma como os registos são realizados concentrando-se na estrutura onde estes se encontram. Visto isto, percebemos que foi graças a este processo, que foi possível progredir no projeto de forma organizada pois a constante comunicação favoreceu o trabalho mais eficiente por parte de cada contribuidor, uma vez que cada um destes possui uma quantidade controlada de trabalho a desenvolver. 

Porém, nem sempre isto se verificou, pelo que numa fase inicial do projeto o processo utilizado foi o processo *Code and Fix*. Este processo foi implementado para que o desenvolvimento de código fosse algo rápido, o que naquela fase era importante para o desenvolver do mesmo. De outra forma, é de fácil perceção que haveriam outros processos que poderiam ser adequados ao desenvolvimento inicial do projeto, e talvez até mais eficientes a longo prazo. Temos como exemplo, o processo *Incremental development and delivery* que desenvolve o sistema em incrementos e vai avaliando cada incremento antes de proceder para o próximo.

O processo *Software Prototyping*, que se baseia na criação de uma versão inicial do projeto, demonstrando os conceitos e tentando vários designs, também poderia ser utilizado neste projeto, porque era uma forma eficiente de reduzir algumas incertezas que possam haver antes de se avançar para desenvolvimentos algo dispendiosos para o projeto.

Primeiramente, verificamos que os contribuidores foram algo desleixados com a utilização de processos bem definidos, pelo que o seu rendimento não foi máximo. Todavia, aquando de uma espécie de introspeção, quando o trabalho foi dividido em diferentes módulos o rendimento aumenta visto que, havendo uma boa comunicação e uma boa reflexão entre contribuidores, a divisão levou a um esclarecimento do papel que cada contribuidor tem no projeto.
Assim sendo, e analisando tudo o que foi realizado até agora no projeto, podemos concluir que um planeamento prévio das tarefas a desempenhar assim como dos processos a utilizar são bastante importantes no desenvolvimento de um trabalho, pois sem estes não há uma estrutura a seguir, e sem essa estrutura o desenvolvimento do projeto não pode ser otimizado.  	