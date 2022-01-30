
import java.util.FormatterClosedException; 
import java.util.NoSuchElementException;
import java.util.Scanner;

//Ejemplo de prueba, muestra el funcionamiento, pero obliga a 
//modificar la entrada de datos

class Registro{ 
String nombre;
String direccion;
double salario;

public Registro(){ }

public Registro(String nom, String dir, double sal)
{
nombre= nom; 
direccion = dir;
salario =sal;
}

public void setNombre(String nom) {nombre = nom;} 
public void setDireccton(String dir) {direccion = dir;} 
public void setsalario(double sal) {salario = sal;}

public String getNombre(){ return nombre;}
public String getDireccion(){ return direccion; } 
public double getsalarto(){ return salario;}


}



