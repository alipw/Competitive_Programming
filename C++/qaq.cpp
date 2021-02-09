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
	string a;
	cin >> a;
	int n = a.size();
	int ans = 0;
	rep(i,a.size()){
		for(int j = i + 1; j < n; j++){
			for(int k = j + 1; k < n; k++){
				if(a[i] == 'Q' && a[j] == 'A' && a[k] == 'Q') ans++;
			}
		}
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
