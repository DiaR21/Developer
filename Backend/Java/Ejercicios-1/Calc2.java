import javax.swing.JOptionPane;

class Interfaz2{
private String dato1;
private float dato2;
private float dato3=5.0f;

public Interfaz2(){
dato1= JOptionPane.showInputDialog("Anote el flotante");
dato2= Float.parseFloat(dato1);
}

public float getFloat(){return dato2;}

public float getDato3(){return dato3;}

public void despDatos(String x, float datX, String y)
{JOptionPane.showMessageDialog(null, x+datX, y, JOptionPane.PLAIN_MESSAGE);}
}

public class Calc2{
public static void main(String args[])
{
float datoX;
float dato3=4.0f;
Interfaz2 obj=new Interfaz2();
datoX=obj.getFloat();
datoX=dato3+datoX;
obj.despDatos("la suma es:",datoX, "de los dos datos");
obj.despDatos("el dato 3 es:", obj.getDato3(),"");
}
} 
