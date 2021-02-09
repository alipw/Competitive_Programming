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
	ll n,d,cur = 0;
	cin >> n >> d;
	ll tmpa,tmpb;
	vector<pair<ll,ll>> a;
	rep(i,n){
		cin >> tmpa >> tmpb;
		a.pb(make_pair(tmpa,tmpb));
	}
	int i = 0,j = 0;
	sort(a.begin(),a.end());
	ll ans = 0;
	while(j < n && i < n){
		if(a[j].first - a[i].first < d){
			cur += a[j].second;
			j++;
		}else{
			cur -= a[i].second;
			i++;
			if(j < i) {
				cur = a[i].second;
				j = i;
			}
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

