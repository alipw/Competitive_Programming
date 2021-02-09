#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	for(int i = 0;i < n; i++){
		for(int j = n-1; j >=i; j--){
			cout << " ";
		}
		for(int j = 0;j < i; j++){
			cout << "*";
		}
		cout << "\n";
	}
	for(int i = n-1;i >= 0; i--){
		for(int j = n-1; j >= i; j--){
			cout << " ";
		}
		for(int j = 0;j < i; j++){
			cout << "*";
		}
		cout << "\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}