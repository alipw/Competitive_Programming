#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n = 0, ans = 0;
	cin >> n;
	int p , q;
	for(int i = 0 ; i < n; i++){
		cin >> p >> q;
		if(q - p >= 2)
			ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}