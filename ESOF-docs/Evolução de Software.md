﻿#**Evolução de Software**

**Objetivo:** Pretende-se com este relatório a identificação de uma feature que possa/deva ser evoluida no projeto  **[Citra](http://citra-emu.org/)**, bem como a análise das componentes que a implementam. Para complementar o referido, procura-se a evolução dessa funcionalidade de um modo cuidado, isto é, sem quebrar funcionalidades já implementadas. Idealmente deve ser efetuada a submissão de um patch com o trabalho realizado, de modo a verificar a utilidade e qualidade do mesmo.

Este relatório está dividido em 5 partes:
- [**Identificação da feature que possa ser evoluida**](#parte1)
- [**Identificação das componentes que implementam essa feature**](#parte2)
- [**Evolução da feature**](#parte3)
- [**Submissão do patch**](#parte4)
- [**Análise Crítica**](#parte5)

No entanto, uma vez que o projeto **[Citra](http://citra-emu.org/)**, projeto acompanhado pelo grupo em virtude da unidade curricular de Engenharia de Software, ainda não está completo e as suas funcionalidades ainda não estão implementadas, isto é, ainda não é possível utilizar o software corretamente, o seguinte relatório tem por base uma teorização acerca das funcionalidades que atualmente se estão a desenvolver.

<a name="parte1"/>
##**Identificação da feature que possa ser evoluida**

Sendo que este projeto ainda se encontra em desenvolvimento, existe uma grande quantidade de features que ainda não foram implementadas, todavia, estas requerem um suporte de software e hardware que ainda não se encontra disponivel. Após uma análise extensa a possíveis funcionalidades novas, e tendo em conta as restrições impostas pelos colaboradores ("don’t start working on the things mentioned below without prior communication"), optou-se por desenvolver uma feature capaz de completar a funcionalidade About Citra como demonstrado na seguinte imagem:

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/about.png)
<br>

Por outro lado, de uma forma não envolvida no projeto visto que não se consegue compilar o mesmo, tentamos também desenvolver uma funcionalidade sonora ao projeto. 

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/som.png)
<br>

 > Todo o código necessário para correr uma janela do windows com as funcionalidades implementadas encontra-se na pasta ESOF-docs (mesmo diretório deste relatório) e designa-se por "window.cpp" embora também tenha sido adicionado à função adicionada ao projeto -> void onAboutSound().


<a name="parte2"/>
##**Identificação das componentes que implementam essa feature**

Para a impementação desta feature foi necessário alterar o ficheiro [main.cpp](https://github.com/leonardo95/citra/blob/master/src/citra_qt/main.cpp), o ficheiro [main.h](https://github.com/leonardo95/citra/blob/master/src/citra_qt/main.h) e o ficheiro [main.ui](https://github.com/leonardo95/citra/blob/master/src/citra_qt/main.ui).

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/ui_xml.png)
<br>

Inicialmente, foi acrescentado ao main.ui a secção do menu de som, com as várias opções, apartir do qual é gerada a janela principal.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/setup_connections.png)
<br>

A abordagem para manter os padrões de estrutura do trabalho já realizado foi de adicionar no main.cpp várias connections entre sinais, que são enviados ao existir um certo evento dentro da janela (neste caso um clique do rato), e SLOTs que seram, basicamente, as funções a chamar para resolver os sinais.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/slots.png)
<br>

Tivemos de adicionar, também os slot necessário OnAbout(), OnSoundOn(), OnSoundOff() e OnSoundSettings().


<a name="parte3"/>
##**Evolução da feature**

Como referido anteriormente, pretende-se a adição de uma janela "About" no programa Citra contendo o seguinte texto:


										  Citra
							 	 Nintendo 3DS emulator
								open source development
							Visit us at: http://citra-emu.org/ 

A informação que se pretendia mostrar está representada na imagem apresentada em seguida.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/about_information.png)
<br>

Relativamente à implementação de som no Citra, adicionou-se um botão em que se consegue ligar ou desligar o som do jogo (visto que não é possível saber se o projeto consegue ou não reproduzir algum tipo de som, o grupo optou por implementar um código que reproduz um som predefinido utilizando "beeps" do Windows, imitando a música de tema do jogo "Super Mario"). 
<br>
Para o sistema reproduzir uma música que o utilizador pretenda aquando do acionamento do botão "Sound ON", basta comentar todo o código relativo à reprodução de "beeps", ou seja, comentar o código desde a linha 57 até à linha 202 no ficheiro window.cpp e descomentar das linha 52 a 54 do mesmo ficheiro. De notar que também será necessário adicionar ao linker do projeto a biblioteca "-lwinmm". Na ferramenta utilizada, Dev-C++, deve-se ir a project -> project options -> parameters -> linker e adicionar a biblioteca especificada anteriormente. Ainda será necessário conter a música que se pretende reproduzir no diretório onde o projeto está a correr, sendo que o nome da mesma terá de ser "music.wav". A reprodução de uma música efetua-se em segundo plano enquanto que a funcionalidade de beeps só é possível correr em primeiro plano.

<a name="parte4"/>
##**Submissão do patch**

O grupo tinha como objetivo implementar a feature referida no ponto anterior no menu do citra, no entanto, devido a problemas em correr o projeto em Windows com recurso á
ferramenta Visual Studio, não foi possível terminar a sua inclusão no projeto.

Perante este problema, o grupo tentou estabelecer contacto com os contribuidores através do canal **[Citra Free Node Channel](http://webchat.freenode.net/?channels=citra)** e através de emails.
Não obtendo resposta, tentamos fazer build no Ubuntu mas ,mais uma vez, sem sucesso 


<a name="parte5"/>
##**Análise Crítica**

Apesar de à primeira análise esta feature poder parecer relativamente simples sofreu agravantes que elevaram o seu grau de dificuldade significativamente. Efectivamente, é da nossa opinião que apesar do facto de estar ainda numa fase inicial de desenvolvimento, poderia apresentar uma melhor organização e estrutura a nivel de código. Para além disso, o que tornou esta feature virtualmente impossível de implementar foi a falta de uma versão estável em que o código adicional pudesse ser devidamente testado.