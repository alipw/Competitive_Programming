#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, total = 0;
	cin >> n;
	bool punyapair = false, ganjil = false, genap = false;
	int data[n];
	for(int i = 0; i < n; i++){
		cin >> data[i];
		total += data[i];
		if(data[i] % 2 == 0){
			genap = true;
		}else{
			ganjil = true;
		}
	}
	if(ganjil && genap)
		punyapair = true;
	if(total % 2 != 0)
		cout << "YES\n";
	else{
		if(punyapair){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
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