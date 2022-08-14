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
	int n, m; cin >> n >> m;
	string targetId; cin >> targetId;

	vector<pair<long,string>> peserta(n);
	umap<int, string> mp;
	for(int i = 0; i < n; i++){
		string idPeserta; cin >> idPeserta;
		long nilai1, nilai2, nilai3; cin >> nilai1 >> nilai2 >> nilai3;

		nilai3 *= 100000000;
		nilai2 *= 20000;

		peserta[i].first = nilai3 + nilai2 + nilai1;
		peserta[i].second = idPeserta;
	}

	sort(rall(peserta));
	for(int i = 0; i < n; i++){
		if(peserta[i].second == targetId){
			if(i + 1 > m) cout << "TIDAK";
			else cout << "YA";
		} 
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	for (int i = 1; i <= TEST_CASE; i++) {
		solve();
		cout << endl;
	}
	return 0;
}
