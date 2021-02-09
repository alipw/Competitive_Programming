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
	int n,tmpa,tmpb,ans = 0;
	cin >> n;
	vector<pair<int,int>> a;
	rep(i,n){
		cin >> tmpa >> tmpb;
		a.pb(make_pair(tmpa,tmpb));
	}
	rep(i,n){
		if(i == 0 || i == n - 1){
			ans++;
		}else{
			if(a[i].first - a[i].second > a[i - 1].first) {
				ans++;
			}
			else if(a[i].first + a[i].second < a[i + 1].first) {
				ans++;
				a[i].first += a[i].second;
			}
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