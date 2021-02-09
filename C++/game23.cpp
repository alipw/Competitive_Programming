#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ll a,b, ans = 0;
	cin >> a >> b;
	if(b % a != 0){
		cout << -1;
	}else{
		bool ok = true;
		ll mul = b / a;
		while(mul > 1){
			if(mul % 2 != 0 && mul % 3 != 0){
				cout << -1;
				ok = false;
				break;
			}
			if(mul % 2 == 0){
				mul /= 2;
				ans++;
			}else if(mul % 3 == 0){
				mul /= 3;
				ans++;
			}
		}
		if(ok)
			cout << ans;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
