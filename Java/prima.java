import java.util.Scanner;

public class prima{
	public static Scanner input = new Scanner(System.in);
	public static void main(String[] args) {
		int angka = input.nextInt();
		boolean angkaIsPrima = true;
		for(int i = 2; i < angka; i++){
		   if(angka % i == 0){
		        System.out.println("Bukan bilangan prima");
		        angkaIsPrima = false;
		        break;
		    }
		} 
		if(angkaIsPrima) System.out.println("prima");
	}
}