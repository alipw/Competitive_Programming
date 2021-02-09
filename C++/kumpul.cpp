#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long long int data[4][4], ans = 0;
	for(i = 0; i < 4; i++){
		for(int j = 0;j < 4;j++){
			cin >> data[i][j];
		}
	}

	for(i = 0; i < 4; i++){
		for(int j = 0;j < 4;j++){
			ans += data[i][j];
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}