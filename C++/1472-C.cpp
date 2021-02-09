#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
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
	cout << endl; for(auto& it : var) cout << it.first << " -> " << it.second << endl;
}
template<typename T,typename S>
void DEBUG_PRINTER(map<T,S> var){
	cout << endl; for(auto& it : var) cout << it.first << " -> " << it.second << endl;
}
//end of template


void solve(){
	int n, ans = 0;
	cin >> n;
	umap<int,int> mp;
	vector<pair<int,int>> a(n + 1);
	for(int i = 1; i <= n; i++){
		int tmp;
		cin >> tmp;
		a[i] = make_pair(tmp,tmp);
	}
	for(int i = 1; i <= n; i++){
		if(!mp[i]){
			vector<int> nodes;
			int total = 0, it = i;
			while(it <= n){
				nodes.push_back(it);
				total += a[it].second;
				if(mp[it]) break;
				mp[it] = 1;
				it += a[it].second;
			}
			ans = max(ans, total);
			for(int j = 0; j < nodes.size(); j++){
				a[nodes[j]].second = total;
				total -= a[nodes[j]].first;
			}
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