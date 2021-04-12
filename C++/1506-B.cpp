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
	int k,n; cin >> n >> k;
	string s; cin >> s;
	int second, first, found = 0, ans = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '*' && !found){
			first = i;
			found = 1;
		}
		if(s[i] == '*'){
			second = i;
		}
	}
	for(int i = first; i < second; i+=k){
		while(s[i] != '*'){
			i--;
		}
		ans++;
	}
	cout << ans + 1;
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

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	solve();
// 	return 0;
// }

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int TEST_CASE:
// 	cin >> TEST_CASE;
// 	for(int i = 1; i <= TEST_CASE; i++){
// 		cout << "CASE #" << i << endl;
// 		solve();
// 		cout << endl;
// 	}
// 	return 0;
// }

//..*.**...*.*.***.*.*...*.*.***
//..x...x...x...x...x...x...x..x
//..x..x...x...x...x...x...x...x