#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, ans = 0;
	cin >> n;
	int i = 1, k = 1;
	while(k <= n){
		k += i;
		n -= k;
		i++;
		ans++;
	}
	cout << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}