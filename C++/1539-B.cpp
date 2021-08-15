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
template<typename T, typename S>
void DEBUG_PRINTER(umap<T,S> var){
	int j = 0; for(auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(map<T,S> var){
	int j = 0; for(auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", ");
}
//end of template


int alphabetIndex(char c){
	return c - 'a' + 1;	
}

void solve(){
	int n,q;
	cin >> n >> q;

	string s; cin >> s;
	vector<int> a1(n);
	vector<int> a2(n);

	int total = 0;
	for(int i = 0; i < n; i++){
		total += alphabetIndex(s[i]);
		a1[i] = total;
	}
	total = 0;
	for(int i = n - 1; i >= 0; i--){
		total += alphabetIndex(s[i]);
		a2[i] = total;
	}

	for(int i = 0; i < q; i++){
		int l,r; cin >> l >> r;
		int front = (l == 1 ? 0 : a1[l - 2]);
		int back = (r == n ? 0 : a2[r]);
		int ans = front + back;
		ans = total - ans;
		cout << ans << endl;
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
