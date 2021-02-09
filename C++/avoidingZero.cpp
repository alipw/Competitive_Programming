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
	for(auto& it : var) cout << it.first << "->" << it.second << endl;
}
//end of template


void solve(){
	ll n,totalSum = 0, totalNeg = 0, totalPlus = 0;
	cin >> n;
	vector<ll> a(n);
	rep(i,n){
		cin >> a[i];
		totalSum += a[i];
		totalNeg += a[i] * (a[i] < 0);
		totalPlus += a[i] * (a[i] >= 0);
	}
	if(totalSum == 0){
		cout << "NO";
		return;
	}else{
		cout << "YES" << endl;
		if(absolute(totalNeg) > totalPlus){
			sort(a.begin(), a.end());
			for(ll i : a) cout << i << " ";
		}else{
			sort(a.rbegin(), a.rend());
			for(ll i : a) cout << i << " ";
		}
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