#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	if(n % 2 == 0){
		cout << n / 2 << "\n";
		for(int i = 0;i < n/2 ;i++){
			cout << 2 << " ";
		}
	}else{
		cout << n /2 << "\n";
		for(int i = 0; i < n/2-1; i++){
			cout << 2  << " ";
		}
		cout << 3;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
