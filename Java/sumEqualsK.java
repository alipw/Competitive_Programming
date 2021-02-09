public final class sumEqualsK {
	public static void main(String[] args) {
		int array[] = {2,5,8,5};
		int n = array.length; // n adalah ukuran dari array
		int k = 10;
		boolean bisaDapatK = false;

		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if(i != j){ // jika mereka berada di indeks yang berbeda
					if(array[i] + array[j] == k){ // jika 2 kombinasi ini menjadi 
						bisaDapatK = true;
					}
				}
			}
		}

		if(bisaDapatK){
			System.out.println("Bisa");
		}else{
			System.out.println("Tidak Bisa");
		}
	} 
}







