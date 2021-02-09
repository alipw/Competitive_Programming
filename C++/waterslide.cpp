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
	int n;
	cin >> n;
	ll ans = 0;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		ans += max(a[i] - a[i + 1],0);
	}
	cout << ans;

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

