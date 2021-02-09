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
	vector<int> ans;
	string a,b;
	cin >> a >> b;
	rep(i,n){
		if(a[i] != b[i]){
			if(i == 0) ans.push_back(i);
			else{
				ans.push_back(i);
				ans.push_back(0);
				ans.push_back(i);
			}
		}
	}
	cout << ans.size() << " ";
	for(auto i : ans) cout << i + 1 << " ";
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

