#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,m;
	cin >> n >> m;
	n/=2;
	for(int i = 1; i <= n; i++){
		for(int j = 0;j < m; j++){
			cout << "#";
		}
		cout << "\n";
		if(i % 2 != 0){
			for(int jk = 0; jk < m-1; jk++){
				cout << ".";
			}
			cout << "#\n";
		}else{
			cout << "#";
			for(int s = 0; s < m-1; s++){
				cout << ".";
			}
			cout << "\n";
		}
	}
	for(int i = 0;i < m; i++){
		cout << "#";
	}
	cout << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}