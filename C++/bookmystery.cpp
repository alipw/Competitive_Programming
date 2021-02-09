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
	int n,ans = 0,cur = 0;
	cin >> n;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	for(int i = 0; i < n; i++){
		cur = max(cur,a[i]);
		if(cur == i + 1){
			ans++;
		}
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}


