#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, k, a, ans = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++){
		cin >> a;
		if(a > k)
			ans+=2;
		else
			ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}