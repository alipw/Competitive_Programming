#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int data[n + 1];
	int ganjil = 0, genap = 0;
	for(int i = 0;i < n; i++){
		cin >> data[i];
	}
	for(int i = 0;i < n; i++){
		if(i % 2 == 0 && i % 2 != data[i] % 2){
			genap++;
		}else if(i % 2 != 0 && i % 2 != data[i] %2){
			ganjil++;
		}
	}
	if(ganjil == genap){
		cout << ganjil << "\n";
	}else{
		cout << -1 << "\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}