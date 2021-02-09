#include <bits/stdc++.h> 
using namespace std;

void solve(){
	int a,b,n,ans = 0;
	cin >> a >> b >> n;
	while(a <= n && b <= n){
		if(a < b)
			a+=b;
		else
			b+=a;
		ans++;
	}
	cout << ans << "\n";
}

int main () 
{ 
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
} 