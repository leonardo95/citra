#**Verificação e Validação**

Este relatório tem como objetivo a análise à verificação e à validação do software do projeto **[Citra](http://citra-emu.org/)**. Objetivamente espera-se que a verificação esteja em conformidade com a especificação do projeto e que a validação mostre que o programa está de acordo com as necessidades do utilizador.

Pode-se assim subdividir este relatório em 3 partes:
- [**Grau de testabilidade do software do programa**](#modulo1)
- [**Estatísticas de teste**](#modulo2)
- [**Bug Report**](#modulo3)
- [**Bibliografia**](#modulo4)

===============
<a name="modulo1"/>
##**Grau de testabilidade do software do programa**

Este módulo aborda a testabilidade do programa e o os testes capazes de melhorar os seus componentes de software.

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

<a name="observabilidade"/>
###**Observabilidade**

**Definição:** Grau no qual é possível observar os resultados intermediários e finais dos testes.

<a name="isolamento"/>
###**Capacidade de Isolamento**

**Definição:** Grau em que o componente a ser testado (CUT) pode ser testado em isolamento.

<a name="sep_conceitos"/>
###**Separação de conceitos**

**Definição:** Grau em que o componente a ser testado tem uma responsabilidade única bem definida.

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

Como o Citra trata-se de um projeto open-source, torna-se imperativo que apósa aceitação dos pull-resquests,
 o sistema permaneça operacional.
 
No entanto neste projeto, e apesar de os testes unitarios á classe garantirem uma maior eficacia em relação aos testes feitos
ao sistema, os testes realizados não foram realizados de uma forma precisa nem com recurso a ferramentas.


===============
<a name="modulo2"/>
##**Estatísticas de teste**

Este módulo diz respeito ao número de testes utilizados bem como a sua cobertura individual e do código gerado.

Segundo as informações recolhidas aos principais colaboradores, o projeto **[Citra](http://citra-emu.org/)** não utiliza nenhum modelo de teste documentado. Estes apenas referem a utilização de testes de hardware que muitas vezes são ignorados aquando da escrita de código.

" When implementing a feature, usually hwtests (small standalone program demoing some hardware or OS feature) are ran and should have matching output on the console and emulator. For software features developed with heavy code RE aid I usually skip tests and just assume my implementation is correct since I used an authoritative reference." 

 - Yuri Schlesner.

No entanto, após uma análise mais detalha sobre o projeto, foram encontrados dois modelos de teste:

-**Teste consola**:

Nesta categoria, os colaboradores testam o software gerado consoante o output gerado na consola: **[Consola](https://ci.appveyor.com/project/bunnei/citra/build/1.0.2169#L7)**

-**Testes Travis CI**:

No que diz respeito à ferramenta Travis CI esta é utilizada pelos colaboradores para compilação e teste do software através da análise do ficheiro gerado:
**[Travis CI](https://travis-ci.org/citra-emu/citra)**

Por fim, importante referir que estes modelos de teste não permitem a geração de estatísticas viávies para apresentação e como o projeto se encontra inacabado, não é possível demonstrar uma cobertura estatística do código gerado.

===============
<a name="modulo3"/>
##**Bug Report**

Neste módulo serão criados casos de teste que serão posteriormente aplicados e analisados.


===============
<a name="modulo4"/>
##**Bibliografia**

**[Moodle - Verificação e Validação](http://moodle.up.pt/pluginfile.php/74998/mod_resource/content/2/ESOF-VV%20-%20Part%20I.pdf)**

**[Moodle - Software testing](http://moodle.up.pt/pluginfile.php/74998/mod_resource/content/2/ESOF-VV%20-%20Part%20I.pdf)**

**[Travis CI](https://en.wikipedia.org/wiki/Travis_CI)**
