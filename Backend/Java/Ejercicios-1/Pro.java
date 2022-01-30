
import java.util.Scanner;
import javax.swing.JOptionPane;

public class Pro
{
   public static void main(String args[])
    {
      int tam;// tamaño del arreglo
      tam=Integer.parseInt(JOptionPane.showInputDialog("Taman'o del vector"));

      float [] producto=new float[tam]; // arreglo para los flotantes 
      float [] aux=new float[tam+1];
      aux[0]=0;
      String entrada;

      for(int i=0; i<tam; i++)
        { // entrada de datos
          entrada=JOptionPane.showInputDialog("Elemnto "+(i+1));   
          producto[i]=Float.parseFloat(entrada);
          aux[i+1]=aux[i]+producto[i]*producto[i];
         }

      JOptionPane.showMessageDialog(null, "Producto punto " + aux[tam]); // producto punto
     }
}



