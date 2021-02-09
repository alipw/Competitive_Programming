#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin() a.end()
#define rall(a) a.rbegin() a.rend()
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
	cout << endl; for(auto& it : var) cout << it.first << "->" << it.second << endl;
}
//end of template



void solve(){
	ll n,ans = 0,m;
	cin >> n >> m;
	ll a[n][m];
	for(ll i = 0; i < n; i++){
		for(ll j = 0; j < m; j++) cin >> a[i][j];
	}
	for(ll i = 0; i < n / 2; i++){
		for(ll j = 0; j < m / 2; j++){
			ll sides[4];
			sides[0] = a[i][j];
			sides[1] = a[n - 1 - i][j];
			sides[2] = a[i][m - 1 - j];
			sides[3] = a[n - 1 - i][m - 1 - j];
			sort(sides,sides + 4);
			ans += absolute(sides[3] - sides[2]);
			ans += absolute(sides[1] - sides[2]);
			ans += absolute(sides[0] - sides[2]);
		}
	}
	if(n % 2){
		for(ll j = 0; j < m / 2; j++){
			ans += absolute(a[n / 2][m - 1 - j] - a[n / 2][j]);
		}
	}
	if(m % 2){
		for(ll i = 0; i < n / 2; i++){
			ans += absolute(a[i][m / 2] - a[n - i - 1][m / 2]);
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