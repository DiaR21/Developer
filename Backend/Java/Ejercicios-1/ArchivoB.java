import java.io.File;

import java.util.Scanner;

public class ArchivoB{

public static void main(String[] args)
{

File fObject = new File("Arreglo.java"); 
System.out.println("Nombre del archivo:" + fObject.getName());

System.out.println("Path: "+fObject.getPath()); 

if(fObject.isFile())

System.out.println( "Archivo Normal");

}
}
