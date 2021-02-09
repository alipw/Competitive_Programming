#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long h1,h2,b1,b2,t1,t2;
	cin >> h1 >> b1 >> t1;
	cin >> h2 >> b2 >> t2;

	b1 *= 30;
	t1 *= 360;
	h1 = h1 + b1 + t1;

	b2 *= 30;
	t2 *= 360;
	h2 = h2 + b2 + t2;

	int ans = max(h2,h1) - min(h2,h1);

	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}