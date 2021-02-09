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
	int n,m;
	cin >> n >> m;
	vector<int> a(n),b(n),ans(n);
	for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
	//wrong n^2 solution
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(i != j && (b[j] <= b[i] && b[j] >= a[i]) || (a[j] >= a[i] && a[j] <= b[i])) ans[i]++;
		}
	}
	for(auto i : ans) cout << i - 1 << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}