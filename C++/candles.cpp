#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	int ans = a;
	while(a >= b){
		int sisa = a % b;
		a /= b;
		ans += a;
		a += sisa;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}