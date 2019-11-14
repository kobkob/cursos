# Classes

Este capítulo apresenta os conceito de **classe**, a principal característica dos programas em Java, paradigma chamado **Orientação a Objetos**.

## OO

O paradigma de desenvolvimento de software chamado **Orientação a Objetos** refere-se ao desenvolvimento de um modelo orientado a _objetos do domínio da aplicação_. Os objetos nesse modelo são abstrações que geralmente refletem as entidades e as operações associadas ao problema a ser resolvido.

Há importantes conceitos, envolvidos neste paradigma que permitirão a modelagem do problema e sua solução. Esta modelagem e os algoritmos do programa em desenvolvimento precisam estar comprometidos com este preceito.

1. **Abstração**

Apenas as funcionalidades e propriedades de uma entidade real serão considerados na modelagem e implementação, representando-a de forma isolada e sintética para permitir a solução otimizada do problema e a reutilização desta modelagem em diversas partes do sistema em desenvolvimento.

2. **Encapsulamento**

O encapsulamento é um dos pilares da orientação a objetos, permitindo a elaboração de entidades simples e sintéticas. Segundo este preceito devemos ocultar a implementação, mostrar apenas as funcionalidades e esconder os detalhes complexos do mundo exterior. Os objetos encapsulados funcionam como uma caixa preta, mostrando apenas sua interface externa.

3. **Classe**

Podemos entender _Classe_ como o modelo de uma série de objetos com as mesmas propriedades e funcionalidades.

As propriedades são em geral chamadas de _atributos_ e as funcionalidades de _métodos_.

4. **Objeto**

Objeto pode ser entendido como a instância de uma classe. Todo objeto pertence a uma determinada classe e possui atributos próprios. Os atributos são mutáveis e podem receber diferentes valores de acordo com as características e o estado do objeto.

Exemplo: todas as lâmpadas em um edifício possuem propriedades e funcionalidades similares. Cada uma individualmente, entretanto, guarda seus valores e estado, como corrente elétrica, potência, cor, etc, podendo estar apagada ou acesa.

5. **Herança**

Em _OO_ é possível criar classes derivadas de outras classes genéricas. As classes _filhas_ herdarão as características das classes _mãe_, incorporando novas propriedades e funcionalidades.

A herança é uma das principais características das linguagens de programação orientadas a objetos, permite o reaproveitamento de métodos e atributos, diminuindo o tempo de desenvolvimento e simplificando o código, de forma a facilitar as manutenções futuras.

Exemplo: lâmpadas controladas pelo celular tem as mesmas funcionalidades das lâmpadas comuns mas com algumas especializações, como controle à distância e variação da luminosidade.

6. **Polimorfismo**

Quando uma classe recebe heranças de uma _classe mãe_, sempre será possível mudar a interface e o comportamento de alguns métodos herdados.

Os métodos que precisam ser mais especializados para atender aos novos requisitos deverão ser reimplementados na _classe filha_. Dá-se a esta modificação o nome de **Polimorfismo**.

Exemplo: lâmpadas controladas pelo celular devem ser mais especializadas. Seu estado não seria apenas _apagada_ ou _acesa_ mas a interface de controle de estado deverá possibilitar o recebimento de valores inermediários que representem sua luminosidade.

##Implementação de classes

Em um programa escrito em Java, é preciso que ao menos uma classe seja implementada. Vimos isto em nosso primeiro programa, na lição **Introdução** quando escrevemos a classe **Oi**, que escreve "Oi, mundo!" no terminal. Esta classe, para ser acessível pelo sistema precisa ser pública e implementar um método público e estático "_main_", que tem por assinatura o rebebimento de um vetor de _Strings_.

Outras classes podem ser implementadas, preferentemente cada uma implementada em próprio arquivo, com o nome da classe.

Para a melhor organização do sistema o Java permite o uso de pacotes (_package_), organizando as classes em diretórios.

**Lâmpadas**

Vamos criar um sistema que permita representar as lâmpadas de um edifício em uma cidade, sendo que algumas são lâmpadas comuns, outras tem controle de luminosidade, outras acendem com o som de batida de palmas e outras, além disso, são controladas por celular.

Crie o diretorio edificio e dentro a classe Edificio.java, que será o programa principal:

```
package cidade;

/**
* Edificio é um programa que gera um edificio com diversas lampadas. 
*
* Algumas lampadas podem ser acesas ou apagadas
* Algumas lampadas podem ser acesas com palmas
* Outras lampadas tem controle de luminosidade
* Há lampadas controladas pelo celular
*
* @author  Monsenhor
* @version 1.0
* @since   2019-13-11 
*/

public class Edificio {

  /** A lampada deste edificio */
  Lampada lampadaDaSala;

  /** Contruindo o edificio com uma lampada */
  public Edificio(Lampada umaLampada) {
    this.lampadaDaSala = umaLampada;
  }

  // método principal
  public static void main (String[] args){
    Lampada minhaLampada = new Lampada();
    Edificio edificio = new Edificio(minhaLampada);
    edificio.acenderLampada();
    edificio.apagarLampada();
  }
}
```

Crie também a classe Lampada, no mesmo diretório:

```
package cidade;

/**
* Lampada representa uma lamapada simples 
*
* Uma lampada pode ser acesa ou apagada
*
* @author  Monsenhor
* @version 1.0
* @since   2019-13-11 
*/
public class Lampada {

  Boolean estado;
  /** Contruindo uma lampada apagada */
  public Lampada() {
    this.estado = false;
  }

  /** Acende a lampada */  
  public void acenderLampada() {
     this.estado = true;
     System.out.println("Acendeu!");
  }

  /** Apaga a lampada */  
  public void apagarLampada() {
     this.estado = false;
     System.out.println("Apagou!");
  }

}
```

A classe _Edificio_ carrega a classe _Lampada_, definida no arquivo _Lampada.java_ e instancia o objeto _lampadaDaSala_. Em seguida chama o método _acender_, deste objeto e imediatamente o método _apagar_.
 
