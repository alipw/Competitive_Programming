#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,x, ans = 0;
	cin >> n >> x;
	for(int i = 1; i <= n; i++){
		if(x%i == 0 && x/i <= n){
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