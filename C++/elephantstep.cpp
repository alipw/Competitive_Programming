#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n , ans = 0;
	cin >> n;
	while(n > 0){
		n-=5;
		ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}