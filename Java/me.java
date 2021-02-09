import java.util.Scanner;

public final class me {
	static Scanner baca = new Scanner(System.in);

	static void solve(){
		int n = baca.nextInt();
		int a[] = new int[n];
		for(int i = 0; i < n; i++) a[i] = baca.nextInt();
	       	for(int i = 0; i < n; i++) {
			System.out.println(a[i]);
		}	
	}

	public static void main(String[] args) {
		int test_case = baca.nextInt();
		for(int i = 0; i < test_case; i++){
			solve();
			System.out.print("\n");
		}
	} 
}
