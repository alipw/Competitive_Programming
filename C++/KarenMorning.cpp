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


void solve(){
	string s;
	cin >> s;
	int h = ((s[0] - '0') * 10) + (s[1] - '0');
	int m = ((s[3] - '0') * 10) + (s[4] - '0');
	int start = h * 60 + m;
	int absoluteTime = h * 60 + m;
	for(int i = 0; i < 360; i++){
		if(absoluteTime == 1440){
			absoluteTime = 0;
		}
		h = absoluteTime / 60;
		m = absoluteTime % 60;
		string cur = (h >= 10 ? to_string(h) : "0" + to_string(h)) + ":"+ (m >= 10 ? to_string(m) : "0" + to_string(m));
		string curReversed = cur;
		reverse(curReversed.begin(),curReversed.end());
		if(curReversed == cur){
			cout << (absoluteTime - start >= 0 ? absoluteTime - start : 1440 + (absoluteTime - start));
			return;
		}
		absoluteTime++;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}