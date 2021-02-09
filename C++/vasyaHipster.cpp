#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int a, b, ans = 0,ans2 = 0;
	cin >> a >> b;
	while(a != 0 && b != 0){
		if(a > 0 && b > 0){
			a--;
			b--;
			ans++;
		}
		if(a == 0){
			ans2 += b/2;
			b = 0;
		}else if (b == 0){
			ans2 += a/2;
			a = 0;
		}
	}
	cout << ans << " " << ans2;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}