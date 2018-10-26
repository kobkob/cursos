#include <stdio.h>
#include <limits.h>
#include <float.h>

/*
Tipos de dados em C

Um dos mais importantes conceitos na linguagem C é a administração
de memória utilizada pelos tipos de dados suportados pela linguagem. 

Devemos ter em conta o quanto de memória nosso programa usa, quando e como
precisamos alocar espaço na pilha de memória e quando devemos limpar 
a memória alocada da pilha.

Cada implementação do compilador C aloca diferentes espaços de memória,
dependendo da plataforma, arquitetura, etc.

Para saber exatamente quanto cada tipo de dados ocupa, podemos usar o
comando "sizeof". O exemplo abaixo apresenta os espaços alocados pelos
principais tipos de dados. Para usar este comando precisamos incluir
a biblioteca "limits.h", presente em quase todos os ambientes de 
programação em C.

Os tipos abaixo estarão presentes na maioria dos ambientes:

int - número inteiro, positivo ou negativo, normalmente de -2.147.483.648 a 2.147.483.647
unsigned int - inteiro positivo
char - caracter, representado por número positivo ou negativo
unsigned char - de 0 a 255
signed char - de -128 a 127	
short - numero inteiro com pouco espaço, de -32.768 a 32.767
unsigned short - inteiro positivo com pouco espaço, de 0 a 65.535
long - grande número inteiro, de -2.147.483.648 a 2.147.483.647
unsigned long - grande número inteiro positivo, de 0 a 4.294.967.295

Em complemento a estes tipos há diversas bibliotecas definindo outros
tipos, como a "floats.h", presente em quase todas as implementações da 
linguagem, que define números racionais de forma aproximada, denominada 
números de ponto flutuante (ou vírgula flutuante) .

float - ponto flutuante com 6 casas decimais (precisão simples)
double - ponto flutuante com 15 casas decimais (precisão dupla)
long double - ponto flutuante com 19 casas decimais (em algumas plataformas 
o tipo long double é apenas um sinônimo de double)

Para simplificar o processamento deste tipo de número, a máquina usa a
notação científica, em potências de 10.

Por exemplo, para representar o número 25,456 em notação científica,
devemos usar 0,25456 x 10^2.

Para simplificar o uso desta notação em calculadoras ou computadores é
comum usar-se a notação E, que apresenta o número na forma nEm. O número
acima seria representado como 0.2546E2, ou seja 0,25456 x 10^2

Mas isto está em base decimal e o computador trabalha com a base 2 

Em binário 25,456 ficaria 11,011 
Em notação científica 0,11011 x 2^2. Ou como 2 em binário é 11, usando a
notação "E" podemos escrever 0.11011E11 ou também 0.11011B11 para explicitar
que está em base binária.

É possível também saber quais os valores mínimos e máximos de cada tipo,
usando-se as macros _MIN e _MAX, exemplo: INT_MAX retorna o valor máximo
suportado para uma variável tipo int na plataforma que o programa está
rodando.

Outro tipo muito importante é o void, que representa um alocamento na pilha
de memória sem valor nenhum a retornar. Este tipo é necessário quando, por
exemplo, é preciso colocar na pilha uma função que realiza algum processo
mas que não retorna nenhum valor. É possível também usar um tipo void
como argumento a uma função que não aceita argumentos.

Outro uso muito importante para void é o cast para qualquer outro tipo. Isto
pode ser muito útil quando não sabemos qual tipo a variável poderá assumir
durante o processamento do código.

*/
int
main ()
{
  printf ("Memória ocupada pelos tipos em C:\n");
  printf ("Número inteiro : %ld bytes\n",        sizeof (int));
  printf ("Inteiro sem sinal : %ld bytes\n",     sizeof (unsigned int));
  printf ("Caracter : %ld bytes\n",              sizeof (char));
  printf ("Caracter sem sinal : %ld bytes\n",    sizeof (unsigned char));
  printf ("Caracter com sinal : %ld bytes\n",    sizeof (signed char));
  printf ("Número Short : %ld bytes\n",          sizeof (short));
  printf ("Short sem sinal : %ld bytes\n",       sizeof (unsigned short));
  printf ("Número Long : %ld bytes\n",           sizeof (long));
  printf ("Long sem sinal : %ld bytes\n",        sizeof (unsigned long));
  printf ("Long sem sinal : %ld bytes\n",        sizeof (unsigned long));
  printf ("Float : %ld bytes\n",                 sizeof (float));
  printf ("Double : %ld bytes\n",                sizeof (double));
  printf ("Long double : %ld bytes\n",           sizeof (long double));
  printf ("Void : %ld bytes\n",                  sizeof (void));

  printf ("\n---------\n");
  printf("Valor mínimo para um float: %E\n", FLT_MIN );
  printf("Valor máximo para um float: %E\n", FLT_MAX );
  printf("Precisão, casa decimais: %d\n", FLT_DIG );
  
  return 0;
}
