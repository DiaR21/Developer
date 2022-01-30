
import java.to.File;
import java.io.FileWriter;

*****1-38
2o de mayo

// solo un cadena sin espacion
//entres
//entres
//control d

****
class Escritor{

private Formatter objEscr;

public void abrirArchivo(){

try{

objEscr= new Formatter("Basebat2.txt");
}
catch(SecurityException securityException)
{
System.err.println( "no hay acceso al archivo");
System.exit( 1 );
}
catch( FileNotFoundException filesNotFoundException)
{
System.err.println( "Error al crear el archivo," ); 
System.exit( 1 );

}

}//fin abrir archive

public void grabarArchivo(){

//Se crea el registro, se carga y transfiere sus datos 
//hasta narcara fin de archivo 
Registro regis= new Registro(); 
Scanner pideDatos= new Scanner(Systen. in );

System.out.printf("%s\n%s\n%s\n%s\n\n", 
"Para terninar la entrada, escriba el indicador de fin de archivo", 
"cuando se le pide que escriba los datos de entrada",
 "En UNIX/Linux/Mac OS X escriba setels dy oprina Intro",
 "En Hindows escriba ctrl y oprina Intro");

System.out.printf("$s\n%s","escetba hombre, direccion, salario","=>");

while(pideDatos.hasNext()) //hasta fin de archivo
{
try(
regts.setNombre(pideDatos.next()); 
regis.setDireccion(pideDatos.next()); 
regts.setsalario(ptdebatos.nextDouble());
objEscr.format("%s %s %.2f\n", regis.getNombre(), regis.getDireccion(), regis.getSalario()); 
System.out.printf("%s\n%s", "escrtba nombre, direccion, salarlo", "=>");
}
catch( FormatterClosedException formatterClosedException )
{
System.err.println("Error al escribir en el archivo");
return;
} // fin de catch
catch(NoSuchElementException elementException)
{
System.err.println("Entrada invalida. Intente de nuevo. ");

pideDatos.nextLine(); // descarta la entrada para que el usuarto Intente denueva

} // fin de catch

}//fin de while

}//fin grabar archivo

public void cerrarArchivo(){
if(objEscr!=null)
objEsc.close();
}

}//fin de la clase

public class EscritorB{

public static void main(String [] args) 
{
Escritor objEscritor new = Escritor();
objEscritor.abrirArchivo(); 
bjEscritor.grabarArchivo(); 
objEscritor.cerrarArchivo();
}
}//fin de la clase