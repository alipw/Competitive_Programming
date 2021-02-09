#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,ans = -1;
	cin >> n;
	int arr[n][n];
	for(int i = 0;i < n; i++){
		for(int j = 0;j < n; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0;i < n-1; i++){
		for(int j = 0;j < n-1; j++){
			if(arr[i][j] == arr[i+1][j+1])
				ans--;
			else
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