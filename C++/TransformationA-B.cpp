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
	string a,b;
	cin >> a >> b;
	vector<string> ans;
	ans.push_back(b);
	while(stoi(a) < stoi(b)){
		if(b.back() == '1'){
			b.pop_back();
		}else{
			if(stoi(b) % 2){
				cout << "NO\n";
				return;
			}
			b = to_string(stoi(b) / 2);
		}
		ans.push_back(b);
	}
	if(ans.back() == a){
		cout << "YES\n";
		cout << ans.size() << endl;
		for(int i = ans.size() - 1; i >= 0; --i) cout << ans[i] << " ";
	}else{
		cout << "NO\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
