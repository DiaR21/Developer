
class Padre
{
private int x;
public Padre(){}
public void setX(int z){x=z;}
public int getX(){return x;}
}

class Hija extends Padre{
private int y;
public Hija(){}
public void setY(int z){y=z;}
public int getY(){return y;}
}

public class Herencia1
{
public static void main(String [] args){
Hija obj= new Hija();
obj.setX(7);
System.out.println(obj.getX());
}
}