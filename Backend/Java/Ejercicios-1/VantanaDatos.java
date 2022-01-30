import javax.swing.JOptionPane;
import javax.swing.JTextArea;

public class VantanaDatos{
  public static void main(String args[])
   {
   //crear text area
    float mx[ ]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
    JTextArea ventDatos= new JTextArea();
    ventDatos.setText("Num Dato\t Dato\n");
       for(int i=0; i<30; i++)
          ventDatos.append(i+"t"+mx[i]+"\n");
 JOptionPane.showMessageDialog(null,ventDatos,"Edad del paciente",JOptionPane.INFORMATION_MESSAGE);
}
}

