import javax.swing.JOptionPane;
import java.util*;
public class Capt2{
public static void main(String[] args)
{
int i;
String cad;
String [] objs= new String[3];
for(i=0;i<3;i++)
{cad=JOptionPane.showInputDialog("anote un dato"+"["+ i + "]"); 
objs[i]=cad;}
 
/*for(i=0;i<3;i++)
System.out.println(objs[i]);*/

/*for(i=0;i<3;i++)
JOptionPane.showMessageDialog(null, "anote un dato"+objs[i], "VENTANA",JOptionPane.PLAIN_MASSAGE, null);
*/
System.out.println(Arrays.toString(objs));
}


}

