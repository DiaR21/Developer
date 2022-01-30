import java.io.File;

import java.util.Scanner;  // java ArchivoC Base.txt 

/* Hay que pasar catos en la lines de comando */

public class ArchivoC{

public static void main(String[] args)
{
String fName = args[0];

File fObject = new File(fName);

System.out.println("Nombre del archivo: " + fObject.getName());

System.out.println("Path: "+fObject.getPath());

if(fObject.isFile())

System.out.println( "Archivo Normal");

if(fObject.exists())

System.out.println("Es legible: "+fObject.canRead());

}
}