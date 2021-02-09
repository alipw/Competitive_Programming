#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define absolute(a) sqrt((a) * (a))
#define VAR_NAME(a) #a
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) cout << "\u001b[36;1m[" << #a << " : "; DEBUG_PRINTER((a));  cout << "]\u001b[0m\n";
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
//end of template

int ans = 0;

int cnt(const string s, char c) {
	if(s.size() == 1) return s[0] != c;
	int mid  = s.size() / 2;
	int cntl = s.size() / 2 - count(s.begin(), s.begin() + mid, c);
	cntl += cnt(string(s.begin() + mid, s.end()), c + 1);
	int cntr = s.size() / 2 - count(s.begin() + mid, s.end(), c);
	cntr += cnt(string(s.begin(), s.begin() + mid),c + 1);
	return min(cntl, cntr);
}

void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << cnt(s,'a');
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