# Introdução

Este capítulo apresenta os conceitos iniciais necessários para o aluno iniciante em C++.

O C++ é usado por centenas de milhares de programadores em praticamente todos os domínios de aplicativos.

O C++ está sendo altamente usado para escrever drivers de dispositivo e outros softwares que dependem da manipulação direta de hardware sob restrições em tempo real.

O C++ é amplamente usado para ensino e pesquisa porque é suficientemente limpo para o ensino bem-sucedido de conceitos básicos.

Qualquer pessoa que tenha usado um Apple Macintosh ou um PC executando o Windows utilizou indiretamente o C ++ porque as principais interfaces de usuário desses sistemas são gravadas em C ++.

A primeira providência neste desafio de aprender a linguagem é instalar o C++ em sua máquina de desenvolvimento. Se você está usando um Debian Linux poderá instalar o kit de desenvolvimento compatível C++ (gnu C++) com o comando:

```
sudo apt update
sudo apt install build-essential
```

Para confirmar que o compilador C++ está instalado em sua máquina use o comando:

```
gcc --version
```
Isto instalou os seguintes pacotes em sua máquina:

> libc6-dev – Biblioteca padrão do C.
> gcc – Compilador C.
> g++ – Compilador C++.
> make – GNU make é uma ferramenta usada para manter programas.
> dpkg-dev – Desenvolvimento de pacotes para o Debian.

Com esta instalação sua máquina agora tem suporte para as linguagens:

> C, C++, Objective-C, Fortran, Ada, Go, e D

1. **Oi Mundo**

C++ é uma linguagem de programação de alto nível, com suporte à orientação a objetos e como possui uma grande variedade de bibliotecas, APIs e ferramentas para teste, desempenho, pacotes, automatização, etc, pode ser considerada também uma plataforma de desenvolvimento.

```
#include <iostream>

int main() {
   std::cout << "Oi, mundo!";
   return 0;
} 
```

Vamos entender este código, linha por linha.

    1. A primeira linha carrega a biblioteca _iostream_ que contém o comando _cout_ que será usado para imprimir uma frase na tela. 

    2. A segunda linha em branco para melhor leitura. Na terceira linha é declarada a rotina _main_, que será executada automaticamente e retorna um número inteiro (_int_). 

    3. A quarta linha chama o comando _cout_, do pacote ou **namespace** _std_, que será usado para imprimir a frase "Oi, mundo!" e o caracter de nova linha.

Para compilar e executar o código acima é recomendado criar também um arquivo _Makefile_ que irá controlar e simplificar o processo, verificando as dependências, realizando os testes e usando o compilador de forma correta. 

- Crie o diretório oi e vá para ele.

```
mkdir oi && cd $_
```

- Crie o arquivo **oi.cpp** com o código acima, usando o editor de texto de sua preferência.

```
gedit oi.cpp
```

- Crie o arquivo **Makefile** com o código abaixo:

```
TARGET           = oi
OBJECT_01        = oi.o
SOURCE_01        = oi.cpp

$(TARGET): $(OBJECT_01)
         gcc -g -o $(TARGET) $(OBJECT_01) -lstdc++

$(OBJECT_01) : $(SOURCE_01)
         gcc -g -c $(SOURCE_01) -o $(OBJECT_01)

 all : $(TARGET)

 clean :
         -rm $ (TARGET)  $(OBJS)
```

- Compile o programa com o comando:

```
make
```

- Rode o programa com o comando:

```
./oi
```



2. **Características do C++**

C++ é uma linguagem de programação de formato livre, estaticamente compilada, de uso geral, com distinção entre maiúsculas e minúsculas e que suporta programação procedural, orientada a objeto e genérica.

Diz-se que uma linguagem de programação é estaticamente compilad quando a verificação de tipos é realizada durante o tempo de compilação em oposição ao tempo de execução.

O C++ é considerado uma linguagem de nível médio, pois combina recursos de linguagem de alto e baixo nível.

O C++ foi desenvolvido por Bjarne Stroustrup a partir de 1979, como um aprimoramento da linguagem C e originalmente nomeado C com Classes, mas posteriormente foi renomeado como C ++ em 1983.

C++ é um superconjunto de C, assim qualquer programa C funcionará como um programa C++.


3. **Bibliotecas Padrão do C++**

O C++ padrão consiste em três partes importantes:

* A linguagem principal, fornecendo todos os elementos básicos, incluindo variáveis, tipos de dados e literais, etc.

* A biblioteca padrão do C++, que fornece um rico conjunto de funções que manipulam arquivos, seqüências de caracteres etc.

* A _Standard Template Library_ (STL) que fornece um rico conjunto de métodos para manipular estruturas de dados, etc.

### O padrão ANSI

O padrão ANSI é uma tentativa de garantir que o C ++ seja portátil, ou seja, o código será compilado sem erros em diversas plataformas, como Windows, Mac, UNIX, Android ou IOS.

O padrão ANSI permanece estável há bastante tempo e todos os principais fabricantes de compiladores C ++ oferecem suporte ao padrão ANSI.


