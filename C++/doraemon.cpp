#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	if(m > n){
		cout << -1;
	}else{
		int a = n / 2;
		int b = n % 2;
		int ans = a + b;
		while(ans % m != 0){
			ans++;
		}
		cout << ans;
	}
	cout << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
