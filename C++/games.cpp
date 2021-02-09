#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, ans = 0;
	cin >> n;
	int data[n][n];
	for(int i = 0;i < n; i++){
		cin >> data[i][0] >> data[i][1];
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(data[i][0] == data[j][1])
				ans++;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}