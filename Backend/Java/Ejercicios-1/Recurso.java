import javax.swing.JOptionPane;



class Empleado{
String nom;
public Empleado(String nom){
this.nom=nom;}
public Empleado(){}
public void setNombre(String nom){this.nom=nom;}
public String getNombre(){return nom;}
}

public class Recurso{
public static void main(String [] atgs)
{ String nomE;
nomE= JOptionPane.showInputDialog("Anote el nombre");
Empleado objE=new Empleado();
objE.setNombre(nomE);
JOptionPane.showMessageDialog(null, objE.getNombre(),"", JOptionPane.PLAIN_MESSAGE);
Empleado objE2=new Empleado(nomE);
JOptionPane.showMessageDialog(null, objE2.getNombre(),"objE2", JOptionPane.PLAIN_MESSAGE);

Empleado objE3=new Empleado("Diana");
JOptionPane.showMessageDialog(null, objE3.getNombre(),"objE3", JOptionPane.PLAIN_MESSAGE);

}
}

