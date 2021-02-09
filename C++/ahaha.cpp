#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
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
	int n;
	cin >> n;
	umap<int,int> mp;
	rep(i,n){
		int tmp;
		cin >> tmp;
		mp[tmp]++;
	}
	int val0 = mp[0];
	int val1 = mp[1];
	if(val0 == val1){
		cout << n / 2 << endl;
		rep(i,n / 2) cout << 0 << " ";
	}else{
		if(mp[1] % 2){
			if(mp[1] <= n / 2){
				cout << mp[0] << endl;
				rep(i,mp[0]) cout << 0 << " ";
			}else{
				cout << mp[1] - 1<< endl;
				rep(i,mp[1] - 1) cout << 1 << " ";
			}
		}else{
			if(mp[1] > mp[0]){
				cout << mp[1] << endl;
				rep(i,mp[1]) cout << 1 << " ";
			}else{
				cout << mp[0] << endl;
				rep(i,mp[0]) cout << 0 << " ";
			}
		}
	}
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