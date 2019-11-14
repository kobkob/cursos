# Introdução

Este capítulo apresenta os conceitos iniciais necessários para o aluno iniciante em Java.

A primeira providência é instalar o Java em sua máquina de desenvolvimento. Se você está usando um Debian Linux poderá instalar o kit de desenvolvimento compatível Java (openJDK 11) com o comando:

```
sudo apt install default-jdk
```

1. **Oi Mundo**

Java é uma linguagem de programação de alto nível, orientada a objetos e como possui uma grande variedade de bibliotecas, APIs e um ambiente de execução, pode ser considerada também uma plataforma de desenvolvimento.

```java
class Oi{  
    public static void main(String args[]){  
     System.out.println("Oi mundo!");  
    }  
}  
```

Vamos entender este código, linha por linha.

    1. A primeira linha declara a classe **Oi**, que será instanciada no objeto que executa as ações que desejamos. Perceba que esta linha termina com uma chave {, que inicia o bloco de código que implementa o algoritmo que imprimirá uma frase.

    2. A segunda linha declara o método estático **main**, que será executado automaticamente na chamada do objeto instanciando a classe **Oi**. Este método recebe como argumento um vetor de strings _args[]_, contendo os argumentos da linha de comando, neste caso, nulo, mas esta assinatura é obrigatória na definição do método principal de uma classe.

O qualificado _void_ indica que o método não retorna nenhum valor mas apenas realiza algo, no caso, imprime algo no terminal.

Um método estático pertence à classe e não será instanciado por um objeto, resultando em melhor aproveitamento de memória. O método principal de uma classe precisa ser estático para ser executável.

Para compilar e executar o código acima será preciso criar um arquivo com o nome da classe e executar o compilador.

- Crie o diretório Oi e vá para ele.

```
mkdir Oi && cd $_
```

- Crie o arquivo **Oi.java** com o código acima, usando o editor de texto de sua preferência.

```
gedit Oi.java
```

- Compile o programa com o comando:

```
javac Oi.java
```

- Rode o programa com o comando:

```
java Oi
```

- Crie o script oi.sh para executar o programa usando o editor de texto de sua preferência:

```
gedit oi.sh
```

- Digite o código abaixo, que permitirá que o programa seja executado de qualquer ponto em seu sistema:

```
#!/bin/sh
mypath=$(realpath $0);
cd $(dirname $mypath);
java Oi
```

- Faça o seu script executável com o comando:

```
chmod +x oi.sh
```

O java precisa encontrar a classe **Oi**, que se encontra no mesmo diretório deste script, para funcionar.


2. **Tipos de programa**

Com Java é possível criar programas para várias utilizações:

- Aplicativos Autônomos
- Aplicativos Web
- Aplicativos Corporativos
- Aplicativos Móveis

3. **Edições oficiais da Plataforma Java**

Existem 4 Plataformas ou Edições oficias do Java:

- Java SE 
Edição Standard

- Java EE
Edição Corporativa

- Java ME
Micro Edição

- Java Fx
Para desenvolvimento de aplicativos para Internet.

4. **Java Open Source**

OpenJDK ("Open Java Development Kit") é uma implementação livre e gratuita da plataforma Java, Edição Standard ("Java SE"). É o resultado dos esforços da Comunidade Java para a evolução atemporal da linguagem.

Atualmente (Novembro de 2019) as versões disponíveis nas distribuições baseadas em Debian são a openJDK 8 e openJDK 11.

5. **JDK, JRE e JVM**

Uma das principais dúvidas do iniciante em Java é a diferença entre JDK, JRE e JVM. 

**JVM** é a máquina virtual Java, responsável pela execução do código de bytes gerado ao se compilar o código escrito na linguagem Java. É uma máquina abstrata, uma mera especificação, e outras linguagens como raku, javascript, PHP, Haskel, Ruby, COBOL, etc, podem ser compiladas para rodar sobre esta máquina virtual. O principal objetivo de usar-se uma máquina virtual é a compatibilidade de ambientes computacionais entre as diversas plataformas.

**JRE** é a implementação da máquina virtual Java para determinada plataforma. É um ambiente de execução, responsável por físicamente rodar o código de bytes Java em tempo de execução (RTE), possuindo as bibliotecas usadas nos códigos Java e outros arquivosi complementares, dependendo da plataforma.

**JDK** é o kit de desenvolvimento, contendo, além do ambiente de execução(JRE e java executável), ainda as ferramentas de desenvolvimento, como o compilador (javac), gerador de documentação (javadoc), gerenciador de arquivos (jar), entre outras.


