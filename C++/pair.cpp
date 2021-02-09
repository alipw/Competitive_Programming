#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,ans = 0;
	cin >> n >> k;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	for(int i = 0;i < n; i++){
		for(int j = 0;j < i;j++){
			if((arr[i] + arr[j]) % k == 0)
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