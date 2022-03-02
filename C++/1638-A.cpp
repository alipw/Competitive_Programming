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

int distance(int a, int b){
	return abs((a - b));
}


void solve() {

	int n; cin >> n;
	vector<int> a(n); rep(i,n) cin >> a[i];
	vector<int> ideal = a;
	sort(all(ideal)); 

	int l = -1, r = 0, currentRValue = INT_MAX;

	for(int i = 0; i < n; i++){
		if(l == -1){
			if(a[i] != ideal[i]){
				l = i;
			}
		}else{
			if(currentRValue > a[i]){
				currentRValue = a[i];
				r = i;
			}
		}
	}
	if(l != -1){
		for(int i = 0; i < l; i++){
			cout << a[i] << " ";
		}
		for(int i = r; i >= l; i--){
			cout << a[i] << " ";
		}
		for(int i = r + 1; i < n; i++){
			cout << a[i] << " ";
		}	
	}else{
		rep(i,n) cout << a[i] << " ";
	}

	

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