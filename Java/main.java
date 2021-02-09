import java.util.Scanner;

public final class main {
	static Scanner baca = new Scanner(System.in);
	public static void main(String[] args){
		int bilangan = baca.nextInt();
		boolean prima = true;
		for(int i = 2; i < bilangan; i++) prima = prima && (bilangan % i != 0);
		System.out.println(prima);
		if(prima) System.out.println("PRIMA");
		else System.out.println("TIDAK PRIMA");
	}
}
