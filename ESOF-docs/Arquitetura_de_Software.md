
#**Arquitetura de software**

Pretende-se com este relatório, uma análise à arquitetura do software do Projeto de GitHub Citra, isto é, à organização do seu sistema, aos seus componentes e respetivas relações, e também ao ambiente que se inserem e os principais conceitos na sua evolução. Para explorarmos estes conceitos, utilizamos como base o modelo 4+1 vistas da arquitectura de software que contempla a vista lógica, a vista de implementação, a vista de processo e a vista de distribuição, sendo que a vista adicional referente ao +1 é aborda os casos de utilização.

 > É de salientar que, tendo em conta a fase precoce do projeto Citra, não é possível obter diagramas com uma boa precisao.

###**Vista Lógica**

Este ponto contempla os conceitos chave do sistema em estudo, sob a forma de classes ou packages.
Apesar da boa organização que os packages e as classes aparentam ter, o grupo acordou que a melhor opção seria abordar um diagrama de packages, pois o projeto Citra é composto por um número bastante elevado de classes o que proporcionaria um diagrama bastante complexo e confuso.

###**Implementation View**

Neste ponto pretende-se demonstrar os componentes de software e as dependencias que estes estabelecem entre si.

<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/Implementation_View.png)
<br>

Segundo a nossa análise do projeto, o Citra apresenta 3 componentes principais: citra, citra_qt e common. O componente citra utliza uma interface de ligação core que é correspondida pelo componente citra_qt através da interface video_core. Estas interfaces apresentam todo o código central do projeto necessário à compilação do mesmo ao nível lógico e vídeo, respetivamente.

Estes dois componentes estabelecem ainda depedências com o componente common, contendo este todo o código comum aos componentes e interfaces referidas.

###**Casos de Utilização**

Os casos de utilização relacionam as restantes vistas, mostrando as relações entre os vários componentes do sistema.
Nesta fase o projeto Citra, dado que ainda se encontra em desenvolvimento, apenas consegue fazer build e correr alguns jogos apresentando alguma lentidão e com algum flick.
<br>
![Alt text](https://raw.githubusercontent.com/leonardo95/citra/master/ESOF-docs/Resources/Use_case_view.PNG)
<br>