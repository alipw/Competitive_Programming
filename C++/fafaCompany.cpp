#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, ans = 0, b;
	cin >> n;
	for(int p = 1; p <= n/2; p++){
		b = n - p;
		if(b % p == 0){
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
