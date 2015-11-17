
#**Verificação e Validação**

Este relatório tem como objetivo a análise à verificação e à validação do software do projeto **[Citra](http://citra-emu.org/)**. Objetivamente espera-se que a verificação esteja em conformidade com a especificação do projeto e que a validação mostre que o programa está de acordo com as necessidades do utilizador.

Pode-se assim subdividir este relatório em 3 partes:
- **Grau de testabilidade do software do programa**
- **Estatísticas de teste**
- **Bug Report**

===============

##**Grau de testabilidade do software do programa**

Este módulo aborda a testabilidade do programa e o os testes capazes de melhorar os seus componentes de software.

Está dividido nos seguintes submódulos:
- **Controlabilidade**
- **Observabilidade**
- **Capacidade de Isolamento**
- **Separação de conceitos**
- **Perceptibilidade**
- **Heterogenidade**

###**Controlabilidade**

**Definição:** Grau no qual é possível controlar o estado do componente a ser testado (CUT) em conformidade com o teste.

###**Observabilidade**

**Definição:** Grau no qual é possível observar os resultados intermediários e finais dos testes.

###**Capacidade de Isolamento**

**Definição:** Grau em que o componente a ser testado (CUT) pode ser testado em isolamento.

###**Separação de conceitos**

**Definição:** Grau em que o componente a ser testado tem uma responsabilidade única bem definida.

###**Perceptibilidade** 

**Definição:** Grau em que o componente a ser testado está documentado e auto-explicativo.

Em projetos de grande dimensão e com um grande número de contribuidores, é bastante importante que todos os intervenientes
sigam um certo código e conduta de forma a tornar o projeto Citra em algo consistente e conciso.

O Citra não apresenta uma API com os recursos utilizados mas apresenta ao longo das classes e do seu código,
vários elementos comentados onde é explicado o seu conteudo das variaveis ou secções ai presentes. 


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

##**Estatísticas de teste**

Este módulo diz respeito ao número de testes utilizados bem como a sua cobertura individual e do código gerado.

Segundo as informações recolhidas aos principais colaboradores, o projeto **[Citra](http://citra-emu.org/)** não utiliza nenhum modelo de teste documentado. Estes apenas referem a utilização de testes de hardware que muitas vezes são ignorados aquando da escrita de código.

" When implementing a feature, usually hwtests (small standalone program demoing some hardware or OS feature) are ran and should have matching output on the console and emulator. For software features developed with heavy code RE aid I usually skip tests and just assume my implementation is correct since I used an authoritative reference." 

 - Yuri Schlesner.


===============

##**Bug Report**

Neste módulo serão criados casos de teste que serão posteriormente aplicados e analisados.