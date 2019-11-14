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
