#include <algorithm>
#include <bits/stdc++.h>
#include <list>
#include <memory>
#include <set>
#include <vector>
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
void DEBUG_PRINTER(T var) {
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var) {
	for (int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(pair<T,S> var){
	cout << var.first << ", " << var.second;
}
template <typename T, typename S>
void DEBUG_PRINTER(vector<pair<T, S>> var) {
	for (int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
}
template<typename T, typename S>
void DEBUG_PRINTER(umap<T, S> var) {
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(map<T, S> var) {
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", "); 
}


//end of template


void solve() {
	int n,m; cin >> n >> m;
	string s(m + 1, 'B');
	
	umap<int, bool> mp;
	vector<int> a(n);
	vector<int> possible_operations;

	for(int& x : a) {
		cin >> x;
		int minVal, maxVal;
		minVal = min(x, m + 1 - x);
		maxVal = max(x, m + 1 - x);

		if(!mp[minVal]) {
			mp[minVal] = true;
			possible_operations.push_back(minVal);
		}else if(!mp[maxVal]){
			mp[maxVal] = true;
			possible_operations.push_back(maxVal);
		}
		
	}
	
	sort(all(possible_operations));
	for(int i = 0; i < possible_operations.size(); i++){
		s[possible_operations[i]] = 'A';
	}

	cout << s.substr(1, m +1);

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	while (TEST_CASE--) {
		solve();
		cout << endl;
	}
	return 0;
}

