
class Padre
{
private int x;
public Padre(int z){x=z;}
public void setX(int z){this.x=z;}
public int getX(){return x;}
}

class Hija extends Padre{
private int y;
public Hija(int z){super(z);}
public void setY(int z){y=z;}
public int getY(){return y;}
}

public class Herencia2
{
public static void main(String [] args){
Hija obj= new Hija(7);

System.out.println(obj.getX());
}
}