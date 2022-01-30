
import java.to.File;

import java.io.FileWriter;


class Registro{

String nombre;

String direccion;

double salario;

public Registro(String nom, String dir, double sal)
{
nombre = nom;

direccion = dir; 
salario =sal;
}

public String getNombre(){ return nombre;}
public String getDireccion(){ return direccion;}
public double getSalario(){ return salario;}
}
public class Escritor{

public static void main(String [] args)
{
Registro reg1= new Registro("Jorge Reyes", "Lindavista", 3800);

try{

File Fobj= new File("Base1.txt");

Filewriter EscTxt = new FileWriter (Fobj, true);


EscTxt.write(reg1.getNombre()+ "\n" +reg1.getDireccion()+ "\n" + reg1.getSalario() + "\n" );

EscTxt.close();

System.out.println("Archivado");


}

catch(Exception e){ System.out.println("Error al escribir");}
}
}



