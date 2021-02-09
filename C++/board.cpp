#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n, ans = 0;
	cin >> n;
	n /= 2;
	if(n == 0){
		cout << 0;
	}else{
		for(int i = 1; i <= n; i++){
			ans += 8 * pow(i,2);
		}
		cout << ans;
	}
	cout << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}