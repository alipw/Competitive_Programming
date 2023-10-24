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
	ull n, sBob = 0, sAlice = 0, tmp;
	cin >> n;
	vector<ull> a(n);
	vector<ull> b(n);
	for(ull i = 0; i < n; i++){
		cin >> tmp;
		if(tmp % 2) b.push_back(tmp);
		else a.push_back(tmp);
	}
	sort(all(a));
	sort(all(b));
	for(ull i = 0; i < n; i++){
		if(i % 2){
			if(b.back() < a.back() || b.empty()) a.pop_back();
			else {
				sBob += b.back();
				b.pop_back();
			}
		}else{
			if(b.back() > a.back() || a.empty()) b.pop_back();
			else {
				sAlice += a.back();
				a.pop_back();
			}
		}
	}
	if(sAlice > sBob) cout << "Alice";
	else if(sBob > sAlice) cout << "Bob";
	else cout << "Tie";
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
