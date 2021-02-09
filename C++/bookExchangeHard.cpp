#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template


void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> ans(n);
	umap<int,int> mp;
	rep(i,n){
		cin >> a[i];
		a[i]--;
	}
	rep(i,n){
		if(!mp[a[i]]){
			int j = i;
			vector<int> p;
			while(!mp[a[j]]){
				p.pb(a[j]);
				mp[a[j]] = 1;
				j = a[j];
			}
			for(auto it : p) ans[it] = p.size();
		}
	}
	for(auto it : ans) cout << it << " ";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
}

