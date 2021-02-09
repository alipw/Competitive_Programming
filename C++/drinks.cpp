#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	float n, ans = 0, tmp = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		ans += tmp;
	}
	ans = ans/n;
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}