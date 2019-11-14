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

  /** método principal */
  public static void main (String[] args){
    Lampada minhaLampada = new Lampada();
    Edificio edificio = new Edificio(minhaLampada);
    minhaLampada.acenderLampada(); 
    minhaLampada.apagarLampada(); 
  }
}
