import javax.swing.JOptionPane;
import javax.swing.JTextArea;

public class VantanaDatos2{
  public static void main(String args[])
   {
   //crear text area
    float mx[ ][ ]={{1,2,3,4,5,6,7,8},{9,10,11,12,13,14,15,16},
                    {17,18,19,20,21,22,23,24},{25,26,27,28,29,30,31,32}};
    JTextArea ventDatos= new JTextArea();
    ventDatos.setText("Matriz:\n\n");

       for(int i=0; i<4; i++)
         {
         ventDatos.append(""); //para que se imprima con un espacio a la izquierda
               for(int j =0;j<8;j++)
              {
                 ventDatos.append(mx[i][j]+"  ");
               }
           ventDatos.append("   \n");
          }
 JOptionPane.showMessageDialog(null,ventDatos,"Edad del paciente",JOptionPane.INFORMATION_MESSAGE);
}
}

