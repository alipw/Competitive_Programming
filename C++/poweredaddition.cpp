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
	int n,ans = 0;
	cin >> n;
	ll maxDiff,b,needed = 0;
	cin >> maxDiff;
	rep(i,n - 1){
		cin >> b;
		if(b < maxDiff){
			ll cur = maxDiff - b;
			needed = max(cur,needed);
		}
		maxDiff = max(b,maxDiff);
	}
	if(needed == 0) cout << 0;
	else cout << (int)log2(needed) + 1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
}

