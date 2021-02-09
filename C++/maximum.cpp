#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int data[n][n];
	for(int i = 0; i < n; i++){
		data[i][0] = 1;
		data[0][i] = 1;
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			data[i][j] = data[i-1][j] + data[i][j-1];
		}
	}
	cout << data[n-1][n-1];
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}