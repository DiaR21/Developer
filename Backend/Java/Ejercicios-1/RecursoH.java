
class Empleado{
 private String nom;
public Empleado(){}
public void setNombre(String nom)
{this.nom=nom;}
public String getNombre(){return this.nom;}
}

/****/

public class RecursoH{
public static void main(String [] args)
{Empleado emp1= new Empleado();
emp1.setNombre("Jorge");
System.out.print(emp1.getNombre());
}

}
