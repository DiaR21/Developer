/****Clase padre***/
class Empleado{
 private String nom;
public Empleado(){}
public void setNombre(String nom)
{this.nom=nom;}
public String getNombre(){return this.nom;}
}

/****CLase hoja***/

class Gerente extends Empleado{
 private int departamento;
public Gerente(int departamento){this.departamento=departamento;}
public int getDepartamento(){return this.departamento;}
}



public class RecursoH3{
public static void main(String [] args)
{Empleado emp1= new Empleado();
emp1.setNombre("Jorge \n");
System.out.print(emp1.getNombre());

Gerente g= new Gerente(1);
g.setNombre("Diana\n");
System.out.print(g.getNombre());
System.out.print(g.getDepartamento());

}

}
