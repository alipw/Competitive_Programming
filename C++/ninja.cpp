#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,a, ans = 0;
	cin >> n >> a;
	int c[n];
	for(int i = 0;i < n; i++){
		cin >> c[i];
	}
	sort(c,c + n);
	for(int i = n-1; i >= 0; i--){
		if(c[i] * 2 < a){
			ans++;
			a -= c[i];
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}