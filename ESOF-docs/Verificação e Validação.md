
#**Verifica��o e Valida��o**

Este relat�rio tem como objetivo a an�lise � verifica��o e � valida��o do software do projeto **[Citra](http://citra-emu.org/)**. Objetivamente espera-se que a verifica��o esteja em conformidade com a especifica��o do projeto e que a valida��o mostre que o programa est� de acordo com as necessidades do utilizador.

Pode-se assim subdividir este relat�rio em 3 partes:
- **Grau de testabilidade do software do programa**
- **Estat�sticas de teste**
- **Bug Report**

===============

##**Grau de testabilidade do software do programa**

Este m�dulo aborda a testabilidade do programa e o os testes capazes de melhorar os seus componentes de software.

Est� dividido nos seguintes subm�dulos:
- **Controlabilidade**
- **Observabilidade**
- **Capacidade de Isolamento**
- **Separa��o de conceitos**
- **Perceptibilidade**
- **Heterogenidade**

###**Controlabilidade**

**Defini��o:** Grau no qual � poss�vel controlar o estado do componente a ser testado (CUT) em conformidade com o teste.

###**Observabilidade**

**Defini��o:** Grau no qual � poss�vel observar os resultados intermedi�rios e finais dos testes.

###**Capacidade de Isolamento**

**Defini��o:** Grau em que o componente a ser testado (CUT) pode ser testado em isolamento.

###**Separa��o de conceitos**

**Defini��o:** Grau em que o componente a ser testado tem uma responsabilidade �nica bem definida.

###**Perceptibilidade** 

**Defini��o:** Grau em que o componente a ser testado est� documentado e auto-explicativo.

Em projetos de grande dimens�o e com um grande n�mero de contribuidores, � bastante importante que todos os intervenientes
sigam um certo c�digo e conduta de forma a tornar o projeto Citra em algo consistente e conciso.

O Citra n�o apresenta uma API com os recursos utilizados mas apresenta ao longo das classes e do seu c�digo,
v�rios elementos comentados onde � explicado o seu conteudo das variaveis ou sec��es ai presentes. 


###**Heterogenidade** 

**Defini��o:** Grau em que a utiliza��o de diversas tecnologias requer o uso de diversos m�todos de ensaio e ferramentas em paralelo.

O desenvolvimento de um projeto com recurso a repositorios Git que est� sujeito � a��o de inumeros
contribuidores conduz n�o s� a uma maior necessidade de comunica��o entre os intervenientes, (neste caso,
os contribuidores ou outras pessoas que desejam contribuir comunicam atraves do canal #citra-dev @ Freenode)
como uma maior necessidade de recorrer a testes unitarios e testes ao sistema para verificar a validade das
altera��es efetuadas ao projeto. 

Como o Citra trata-se de um projeto open-source, torna-se imperativo que ap�sa aceita��o dos pull-resquests,
 o sistema permane�a operacional.
 
No entanto neste projeto, e apesar de os testes unitarios � classe garantirem uma maior eficacia em rela��o aos testes feitos
ao sistema, os testes realizados n�o foram realizados de uma forma precisa nem com recurso a ferramentas.


===============

##**Estat�sticas de teste**

Este m�dulo diz respeito ao n�mero de testes utilizados bem como a sua cobertura individual e do c�digo gerado.

Segundo as informa��es recolhidas aos principais colaboradores, o projeto **[Citra](http://citra-emu.org/)** n�o utiliza nenhum modelo de teste documentado. Estes apenas referem a utiliza��o de testes de hardware que muitas vezes s�o ignorados aquando da escrita de c�digo.

" When implementing a feature, usually hwtests (small standalone program demoing some hardware or OS feature) are ran and should have matching output on the console and emulator. For software features developed with heavy code RE aid I usually skip tests and just assume my implementation is correct since I used an authoritative reference." 

 - Yuri Schlesner.


===============

##**Bug Report**

Neste m�dulo ser�o criados casos de teste que ser�o posteriormente aplicados e analisados.