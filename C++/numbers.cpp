#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k2 = 0,k3 = 0,k5 = 0,k6 = 0;
	int num256 = 0,num32 = 0;
	cin >> k2 >> k3 >> k5 >> k6;
	while(true){
		//jika peracik angka 256 atau angka 32 masih ada, maka ulang terus sampai habis, utamakan 256 dulu
		//peracik angka 256 : k2 >= 1, k5 >= 1, k6 >= 1
		//peracik angka 32 : k3 >= 1, k2 >= 1 
		if(k2 >= 1 && k5 >= 1 && k6 >= 1){
			num256 += 256;
			//k2,k5,k6 -=1
			k2--;
			k5--;
			k6--;
		}
		else if (k2 >= 1 && k3 >= 1){
			num32 += 32;
			k2--;
			k3--;
		}
		else
			break;
	}
	int ans = num32 + num256;
	cout << ans << endl;
}