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
	int n,ans = 1,cur = 1;
	cin >> n;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	rep(i,n){
		if(i + 1 != n && a[i] <= a[i + 1]){
			cur++;
		}else{
			cur = 1;
		}
		ans = max(ans,cur);
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
