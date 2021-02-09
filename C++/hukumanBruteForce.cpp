#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unsigned long long int a = 0, b = 0, ans = 0;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
		ans += i;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}