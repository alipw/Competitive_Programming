#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ll a,b;
	cin >> a >> b;
	ll maxx = max(a,b), minn = min(a,b);
	ll mul = maxx / minn;
	if(mul == 1 && maxx % minn == 0){
		cout << 0;
	}
	else if(maxx % minn == 0){
		int i = 1;
		while(pow(2,i) < mul){
			i++;
		}
		if(minn * pow(2,i) == maxx){
			ll ans = 0;
			while(mul > 8){
				mul /= 8;
				ans++;
			}
			if(mul != 1){
				ans++;
			}
			cout << ans;
		}else{
			cout << -1;
		}
	}else{
		cout << -1;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}