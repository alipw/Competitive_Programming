#include<iostream>
using namespace std;
#include<unordered_map>
#define umap unordered_map

int main(){
	int array[] = {2, 5, 8, 5};
	int n = sizeof(array) / sizeof(array[0]); // n disini adalah ukuran dari array. yaitu 4
	int K = 11;
	bool bisaDapatK = false;
	umap<int,int> mp;
	for(auto i : array) mp[i]++;
	for(auto i : array){
		if(mp[K - i] >= (0 + ((K - i) == i))){
			bisaDapatK = true;
		}
	}

	//solusi brute force
	// for(int i = 0; i < n; i++){
	// 	for(int j = 0; j < n; j++){
	// 		if(i != j){ // jika angkanya bukanlah angka di indeks yang sama
	// 			if(array[i] + array[j] == K){ // jika hasil kombinasi adalah K, maka bisaDapatK = true
	// 				bisaDapatK = true;
	// 			}
	// 		}
	// 	}
	// }



	if(bisaDapatK) cout << "Bisa";
	else cout << "Tidak Bisa";
	cout << endl;
}


