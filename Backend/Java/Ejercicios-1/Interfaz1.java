import javax.swing.JOptionPane;

public class Interfaz1{
public static void main(String args[])
{
float dato1;
int dato2;
int dato3=3;
dato1=JOptionPane.showInputDialog("anote le numero ");
dato2=Integer.parseInt(dato1);
dato2=dato3+dato2;
JOptionPane.showMessageDialog(null, "la suma es" + dato2, "suna de los dos datos",  JOptionPane.PLAIN_MESSAGE);

}}



