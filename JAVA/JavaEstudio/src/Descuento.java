
import java.util.Scanner;

public class Descuento {

	
	public static void main(String[] args) {
	//Triangulo Valido	
		System.out.println("Total de compra: ");
		Scanner sr1=new Scanner(System.in);
		int compra=sr1.nextInt();

		if(compra<=1000) {
			System.out.println("Su compra fue de "+compra+"$ \nSin descuento");
		}
		
		if(compra>1000 && compra<=4999) {
			System.out.println("Su compra fue de "+compra+"$ con 10% de descuento \nA pagar:"+(compra*0.9)+"$");
		}

		if(compra>4999 && compra<=9999) {
			System.out.println("Su compra fue de "+compra+"$ con 20% de descuento \nA pagar:"+(compra*0.8)+"$");
		}
		if(compra>9999) {
			System.out.println("Su compra fue de "+compra+"$ con 30% de descuento \nA pagar:"+(compra*0.7)+"$");
		}
		
	}
	
}
