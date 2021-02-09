#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define absolute(a) sqrt((a) * (a))
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) {cout << "[" << #a << " : "; DEBUG_PRINTER((a)); cout << "]\n" ;}
template <typename T>
void DEBUG_PRINTER(T var){
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var){
	for(int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S>
void DEBUG_PRINTER(vector<pair<T,S>> var){
	for(int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
}
template<typename T,typename S>
void DEBUG_PRINTER(umap<T,S> var){
	cout << endl;
	for(auto& it : var) cout << it.first << " -> " << it.second << endl;
}
//end of template


void solve(){
	ll n, ans = 0;
	cin >> n;
	vector<ll> a(n); rep(i,n) cin >> a[i];
	umap<ll,ll> mp;
	ll sum = 0;
	rep(i,n){
		sum += a[i];
		if(sum == 0 || mp[sum]){
			ans++;
			mp.clear();
			sum = a[i];
		}
		mp[sum] = 1;
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	cout << endl;
	return 0;
}