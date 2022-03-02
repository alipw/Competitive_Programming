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

bool compareSecond(const pair<int,int>& i, const pair<int,int>& j) {
	return i.second < j.second;
}

bool compareFirst(const pair<int,int>& i, const pair<int,int>& j) {
	return i.first < j.first;
}


void solve() {
	int n;
	cin >> n;
	umap<int,int> pos;
	vector<pair<int,int>> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		mp[a[i].first] = i;
	}
	string s;
	cin >> s;
	for(int i = 0; i < n; i++){
		a[i].second = s[i] - '0';
	}
	sort(all(a), compareSecond);
	vector<pair<int,int>> disliked;
	vector<pair<int,int>> liked;
	for(int i = 0; i < n; i++){
		if(a[i].second == 0) disliked.push_back(a[i]);
		else liked.push_back(a[i])
	}
	debug(a);
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
