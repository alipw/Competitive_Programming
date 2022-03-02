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
void DEBUG_PRINTER(T var) { 
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var) { 
	for (int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
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
	string input;
	cin >> input;
	vector<char> ans(input.length());
	umap<int,int> mp;
	for(int i = 0; i < input.length() - 1; i++){
		char currChar = input[i], nextChar = input[i + 1];
		if(currChar == '-'){
			if(input[i + 1] == '.') ans[i] = '1';
			else ans[i] = '2';
			mp[i]++;
			mp[i + 1]++;
			i++;
		}
	}
	for(int i = 0; i < input.length(); i++){
		if(mp[i] == 0) ans[i] = '0';
	}
	for(int i = 0; i < input.length(); i++) {
		if(ans[i] == '1' || ans[i] == '2' || ans[i] == '0') cout << ans[i];
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}