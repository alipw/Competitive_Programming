#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)

void solve(){
	int n,ans = 0;
	cin >> n;
	umap<int,int> mp;
	rep(i,n){
		int a;
		cin >> a;
		mp[a]++;
		ans = max(ans,mp[a]);
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}