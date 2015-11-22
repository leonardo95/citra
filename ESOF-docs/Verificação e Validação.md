#**Verificação e Validação**

Neste ponto da avaliação, à cadeira de Engenharia de Software, foi proposto ao grupo incidir sobre a análise à verificação e validação do software do projeto **[Citra](http://citra-emu.org/)**. Objetivamente, espera-se que a verificação esteja em conformidade com a especificação do projeto e que a validação mostre que o programa está de acordo com as necessidades do utilizador.

Pode-se assim subdividir este relatório em 4 partes:
- [**Grau de testabilidade do software do programa**](#modulo1)
- [**Estatísticas de teste**](#modulo2)
- [**Bug Report**](#modulo3)
- [**Bibliografia**](#modulo4)

===============
<a name="modulo1"/>
##**Grau de testabilidade do software do programa**

A análise do grau de testabilidade é algo importante, e visto que o projeto em análise é portador de uma grande complexidade e variedade os testes devem estender-se a todos os pequenos componentes do software. Os testes são importantes em vários pontos mas principalmente são importantes para garantir a qualidade do projeto, ao longo do desenvolvimento do mesmo.
Visto isto, torna-se fácil perceber o quão útil, mas também simples, é testar o software.

Está dividido nos seguintes submódulos:
- [**Controlabilidade**](#controlabilidade)
- [**Observabilidade**](#observabilidade)
- [**Capacidade de Isolamento**](#isolamento)
- [**Separação de conceitos**](#sep_conceitos)
- [**Perceptibilidade**](#perceptibilidade)
- [**Heterogenidade**](#heterogenidade)

<a name="controlabilidade"/>
###**Controlabilidade**

**Definição:** Grau no qual é possível controlar o estado do componente a ser testado (CUT) em conformidade com o teste.

Analisando a controlabilidade dos componentes sob teste, CUT ou "component under test", verificamos que a mesma é tanto 
maior quanto mais específico for o componente em análise. Por outras palavras, percebemos que a controlabilidade de um 
teste que abrange um módulo do "video_core" a probabilidade daquela ser reduzida é elevada pois o "video_core" interage 
com uma diversidade de módulos e daí ser difícil de prever, para alguns casos, todas as situações possíveis.

No caso mais específico do projeto **[Citra](http://citra-emu.org/)**, visto que não realiza testes não podemos falar 
concretamente para os módulos existentes, podendo apenas teorizar sobre o assunto, como feito para o módulo "video_core" anteriormente.

Também módulos como "citra" e "citra_qt" também pode ser analisados como mostrado anteriormente para o módulo "video_core" 
devia à complexidade que lhes é característica.

Por conseguinte, é de fácil perceção que um componente mais "interior" ao componente deverá ter uma controlabilidade maior pois limita 
a sua interãção aos outros componentes do módulo e ao próprio módulo. Temos como exemplo o componente "video_core.h", que sendo um 
componente do módulo "video_core" deverá ter uma controlabilidade elevada.

Em suma, podemos afirmar que quanto maior a profundidade do componente, em relação à sua posição no código, maior deverá ser a sua 
controladidade, ou seja, quanto mais específico for um componente maior será a sua controlabilidade.

<a name="observabilidade"/>
###**Observabilidade**

A observabilidade pode ser encarada como o grau no qual é possível observar os resultados intermediários e 
finais dos testes.

Visto isto, percebemos que no projeto em análise, visto que não foram realizados os testes de software usuais, 
as estatísticas de teste irão ser muito difíceis de obter, como poderá ser visto mais à frente.

Assim, a observabilidade relativa aos resultados de testes vai ser inexistente pois estes efetivamente não existem. 
Portanto, nada podemos concluir à cerca da observabilidade dos testes do projeto **[Citra](http://citra-emu.org/)**.

Porém, podemos afirmar que se fossem realizados testes, e aplicados aos módulos principais do projeto (como citra, 
citra_qt e video_core), seria fácil detetar as várias falhas que poderiam existir no projeto. Posteriormente, com 
recurso a programas e ferramentas próprias, poderiam ser obtidas as estatísticas de teste e assim poderiamos afirmar 
que a observabilidade era bastante boa pois permitia, de uma forma estruturada, perceber a evolução do código e a sua
eficiência, visando sempre a otimização do código e, por conseguinte, do projeto.

Resumindo, visto que os testes são, de certa forma, da inteira responsabilidade do autor do código (sendo que este pode 
até decidir, ou não, realizar os testes ao software), podemos concluir que a observabilidade vai ser dependente da técnica 
usada para a sua implementação, pelo que não podemos dizer com certeza que a observabilidade seja ótima ou não, pelo menos 
não de forma constante.

<a name="isolamento"/>
###**Capacidade de Isolamento**

**Definição:** Grau em que o componente a ser testado (CUT) pode ser testado em isolamento.

Nesta secção, o ponto em análise, Capacidade de Isolamento, relaciona-se com o grau em que o componente a ser teste (CUT - 
Component Under Test), pode ser testado em isolamento.

Percebemos então que, a capacidade de isolamento é tanto maior quanto maior for a independência de um módulo, ou seja,
quanto menos um módulo se relacionar com outros módulos e/ou componentes, maior será a sua capacidade de isolamente e
vice-versa.

A capacidade de isolamento de um módulo como "video_core" será portanto menor do que a capacidade de isolamento de um dos
componentes do módulo. Neste ponto, podemos verificar uma certa ligação entre este tópico e a secção relacionada com a 
controlabilidade.

Em suma, podemos afirmar que a matéria em análise depende sempre da dependência entre componentes, pois se um componente for
dependente de outro, mesmo que o teste do primeiro tenha passado o do segundo pode não passar por causa da dependência existente
entre os dois, bem como devido a todas as ligação e chamadas de funções e código "alheio".

<a name="sep_conceitos"/>
###**Separação de conceitos**

**Definição:** Grau em que o componente a ser testado tem uma responsabilidade única bem definida.

O desenvolvimento de projetos em grande escala deve garantir que a funcionalidade atribuida a uma classe ou várias
classes, fique focada exclusivamente ao elemento a que diz respeito, isto para evitar que o código e funcionalidades
fiquem baralhas e posteriormente, menos eficientes.

O projeto Citra apresenta uma separação de conceitos bem definida e concisa. A equipa responsável optou por
criar vários packages de forma a separar os diferentes conceitos a que o Citra está exposto. Para além disso, 
o Citra, tem como bases a coerência e a eficiência isto porque, tenta ao máximo evitar a repetição de código e por vezes reutiliza
código para negar a introdução de bugs.
No Citra, o package Commons é o responsável pela gerência de todos os fatores referenciados anteriormente.

É imperativo recorrer á separação de conceitos de forma a facilitar o isolamento dos elementos nos testes o que 
permite cobrir uma maior percentagem de casos de teste.

<a name="perceptibilidade"/>
###**Perceptibilidade** 

**Definição:** Grau em que o componente a ser testado está documentado e auto-explicativo.

Em projetos de grande dimensão e com um grande número de contribuidores, é bastante importante que todos os intervenientes
sigam um certo código e conduta de forma a tornar o projeto Citra em algo consistente e conciso.

O Citra não apresenta uma API com os recursos utilizados mas apresenta ao longo das classes e do seu código,
vários elementos comentados onde é explicado o seu conteudo das variaveis ou secções ai presentes. 

<a name="heterogenidade"/>
###**Heterogenidade** 

**Definição:** Grau em que a utilização de diversas tecnologias requer o uso de diversos métodos de ensaio e ferramentas em paralelo.

O desenvolvimento de um projeto com recurso a repositorios Git que está sujeito á ação de inumeros
contribuidores conduz não só a uma maior necessidade de comunicação entre os intervenientes, (neste caso,
os contribuidores ou outras pessoas que desejam contribuir comunicam atraves do canal #citra-dev @ Freenode)
como uma maior necessidade de recorrer a testes unitarios e testes ao sistema para verificar a validade das
alterações efetuadas ao projeto. 

Como o Citra trata-se de um projeto open-source, torna-se imperativo que após a aceitação dos pull-resquests, o sistema permaneça operacional.
 
No entanto neste projeto, e apesar de os testes unitarios á classe garantirem uma maior eficacia em relação aos testes feitos
ao sistema, os testes realizados não foram realizados de uma forma precisa nem com recurso a ferramentas.


===============
<a name="modulo2"/>
##**Estatísticas de teste**

Este módulo diz respeito ao número de testes utilizados bem como a sua cobertura individual e do código gerado.

Segundo as informações recolhidas aos principais colaboradores, o projeto **[Citra](http://citra-emu.org/)** não utiliza nenhum modelo de teste documentado. Estes apenas referem a utilização de testes de [hardware](https://github.com/citra-emu/hwtests) que muitas vezes são ignorados aquando da escrita de código.

" When implementing a feature, usually hwtests (small standalone program demoing some hardware or OS feature) are ran and should have matching output on the console and emulator. For software features developed with heavy code RE aid I usually skip tests and just assume my implementation is correct since I used an authoritative reference." 

 - Yuri Schlesner.

No entanto, após uma análise mais detalha sobre o projeto, foram encontrados dois modelos de teste:

-**Teste consola**:

Nesta categoria, os colaboradores testam o software gerado consoante o output gerado na consola: **[Consola](https://ci.appveyor.com/project/bunnei/citra/build/1.0.2169#L7)**

-**Testes Travis CI**:

No que diz respeito à ferramenta Travis CI esta é utilizada pelos colaboradores para compilação e teste do software através da análise do ficheiro gerado:
**[Travis CI - citra](https://travis-ci.org/citra-emu/citra)** **[Travis CI - hwtests](https://travis-ci.org/citra-emu/hwtests)**

Por fim, importante referir que estes modelos de teste não permitem a geração de estatísticas viávies para apresentação e como o projeto se encontra inacabado, não é possível demonstrar uma cobertura estatística do código gerado.

===============
<a name="modulo3"/>
##**Bug Report**

Como este é um projeto que se encontra numa fase inicial de desenvolvimento, é normal que este emulador se encontre com bastantes bugs, principalmente no que toca a aspectos gráficos e tentar
correr jogos comerciais, como é perceptivel nos issues. No entanto apenas foram desenvolvidos [testes ao hardware](https://github.com/citra-emu/hwtests) a correr no proprio emulador, porém para realizar os testes é necessario fazer o download e correr o [Homebrew Channel](https://github.com/smealum/3ds_hb_menu) e lançar o 3ds link, pressionando o butao X do teclado e em seguida configurar o IP e port. Contudo, ao tentar correr o 3ds link, dá erro, não sendo assim possível correr esses mesmos testes.


<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/erro.png)
<br>


Estes teste de hardware, todavia, apenas testam certos estados do hardware da Nintendo 3DS, não testando efectivamente o código do projeto, sendo que por esse motivo, e por os testes estarem ainda numa fase de criação muito inicial, é da nossa opinião que este não é um bom modelo para testar o extenso código que provém dum projeto tão elaborado como este. 



===============
<a name="modulo4"/>
##**Bibliografia**

**[Moodle - Verificação e Validação](http://moodle.up.pt/pluginfile.php/74998/mod_resource/content/2/ESOF-VV%20-%20Part%20I.pdf)**

**[Moodle - Software testing](http://moodle.up.pt/pluginfile.php/74998/mod_resource/content/2/ESOF-VV%20-%20Part%20I.pdf)**

**[Travis CI](https://en.wikipedia.org/wiki/Travis_CI)**
