#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, t;
	cin >> n >> t;
	if(n >= 2){
		if(t == 10){
			cout << 1;
			for(int i = 0;i < n - 1; i++){
				cout << 0;
			}
		}else{
			for(int i = 0; i < n ;i++){
				cout << t;
			}
		}
	}else{
		if(t == 10){
			cout << -1;
		}else{
			cout << t;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}