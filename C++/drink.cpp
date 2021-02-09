#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,k,l,c,d,p,nl,np, ans = 0;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int totall = k * l;
	int totalc = c * d;
	while(totall >= nl && totalc > 0 && p >= np){
		ans++;
		totalc -= 1;
		totall -= nl;
		p -= np;
	}
	cout << ans/n;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}