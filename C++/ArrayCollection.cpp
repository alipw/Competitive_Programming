#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define VAR_NAME(a) #a
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) cout << "\u001b[36;1m[" << #a << " : "; DEBUG_PRINTER((a));  cout << "]\u001b[0m\n";
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
//end of template


void solve(){
	ll n,ans = 0;
	cin >> n;
	vector<ll> a(n);
	rep(i,n) cin >> a[i];
	ll cache = 0;
	for(ll i = 0; i < n; i++){
		if(a[i] < 0){
			if(cache > sqrt(a[i] * a[i])){
				cache += a[i];
			}else{
				int absoluteValueofAi = sqrt(a[i] * a[i]);
				absoluteValueofAi -= cache;
				cache = 0;
				ans += absoluteValueofAi;
			}
		}else{
			cache += a[i];
		}
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	while(TEST_CASE--){
		solve();
		cout << endl;
	}
	return 0;
}