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
	int n;
	cin >> n;
	vector<vector<char>> a(n,vector<char>(n));
	vector<pair<int,int>> ans;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	if(a[0][1] == a[1][0]){
		if(a[n - 1][n - 2] == a[0][1]) ans.push_back(make_pair(n, n - 1));
		if(a[n - 2][n - 1] == a[0][1]) ans.push_back(make_pair(n - 1, n));
	}
	else if(a[n - 2][n - 1] == a[n - 1][n - 2]){
		if(a[n - 1][n - 2] == a[0][1]) ans.push_back(make_pair(1,2));
		if(a[n - 1][n - 2] == a[1][0]) ans.push_back(make_pair(2,1));
	}else{
		if(a[0][1] == a[n - 2][n - 1]){
			ans.push_back(make_pair(n - 1, n));
			ans.push_back(make_pair(2,1));
		}else{
			ans.push_back(make_pair(n, n - 1));
			ans.push_back(make_pair(1,2));
		}
	}
	cout << ans.size() << endl;
	for(auto x : ans){
		cout << x.first << " " << x.second << endl;
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