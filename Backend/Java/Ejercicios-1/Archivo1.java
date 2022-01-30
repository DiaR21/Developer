import java.io.File;
import java.util.Scanner;

class InfoArchivo{

File nombre;

InfoArchivo(){ }

public void analizar(String ruta)
{
nombre = new File(ruta);

if(nombre.exists())
System.out.printf("%s", "Existe el Archivo\n");
else
System.out.printf("%s","No Existe el archivo\n");
}
public long lonArch() {return nombre.length(); }
}

public class Archivo1{

public static void main(String args[])
{
Scanner entrada =new Scanner( System.in );
InfoArchivo Infobj =new InfoArchivo();
System.out.print("Escriba aqui el nombre del archivo o directorio:" );
Infobj.analizar (entrada.nextLine());
System.out.print("La longitud del archivo es: \n");

System.out.println(Infobj.lonArch() +" bytes");

}

}


