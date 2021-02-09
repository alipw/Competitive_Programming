#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template


void solve(){
	ll n,x = 0, distressedKids = 0;
	cin >> n >> x;
	for(int i = 0; i < n; i++){
		string a;
		ll n;
		cin >> a >> n;
		if(a == "+") x+=n;
		else if(a == "-"){
			if(x >= n) x -= n;
			else distressedKids++;
		}
	}
	cout << x << " " << distressedKids;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
