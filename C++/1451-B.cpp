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
	int n,q;
	cin >> n >> q;
	string s;
	cin >> s;
	vector<int> a(q),b(q);
	for(int i = 0; i < q; i++){
		cin >> a[i] >> b[i];
		a[i]--;
		b[i]--;
	}
	for(int i = 0; i < q; i++){
		char first = s[a[i]], second = s[b[i]];
		int ptr = a[i] - 1;
		bool found = false;
		while(ptr >= 0){
			if(s[ptr] == first){
				cout << "YES";
				found = 1;
				break;
			}
			ptr--;
		}
		ptr = b[i] + 1;
		while(ptr < n && !found){
			if(s[ptr] == second){
				cout << "YES";
				found = 1;
				break;
			}
			ptr++;
		}
		if(!found) cout << "NO";
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	while(TEST_CASE--){
		solve();
	}
	return 0;
}
