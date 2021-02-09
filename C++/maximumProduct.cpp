#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long
#define ll long long
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
	ll n;
	cin >> n;
	vector<ll> a(n);
	rep(i,n) cin >> a[i];
	sort(a.begin(), a.end());
	ll first,second,third;
	first = a[n - 1] * a[n - 2] * a[n - 3] * a[n - 4] * a[n - 5];
	second = a[n - 1] * a[n - 2] * a[n - 3] * a[0] * a[1];
	third = a[3] * a[2] * a[n - 1] * a[0] * a[1];
	cout << max(first,max(second,third));
	for(int j - 0; j < n; j++){
		
	}
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