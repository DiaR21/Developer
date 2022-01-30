import java.io.FileReader;
import java.io.BufferedReader;

public class Lector{

     public static void main(String[] args)  // lee las bases de datos ya hechas
  {
      String textoCont;

       try{

        FileReader objLect= new FileReader("Base22.txt"); // creada antes

       BufferedReader objCont =new BufferedReader(objLect);

        while((textoCont= objCont.readLine()) != null)
            {
             System.out.println(textoCont);
             }
          } 
      catch(Exception e)
      {
       System.out.println("Error al leer Archivo");
        }
     }
}//fin clase

