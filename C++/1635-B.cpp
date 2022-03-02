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


void solve() {
	int n, ans = 0; cin >> n;
	vector<int> a(n); for(int &x: a) cin >> x;

	for(int i = 1; i < n - 1; i++){
		if(a[i] > a[i - 1] && a[i] > a[i + 1]){
			if(i + 2 < n && a[i + 2] > a[i]) a[i + 1] = a[i + 2];
			else a[i + 1] = a[i];
			ans++;
		}
	}
	cout << ans << "\n";
	for(int x : a) cout << x << " ";
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