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
	string s;
	cin >> s;
	int ans = 0, n = s.size(), consq = 0;
	vector<int> a;
	for(int i = 0; i < n; i++){
		if(s[i] == '1'){
			consq++;
		}else{
			a.pb(consq);
			consq = 0;
		}
	}
	if(s[n - 1] == '1') a.pb(consq);
	sort(a.begin(),a.end());
	for(int i = a.size() - 1; i >= 0; i-=2) ans+=a[i];
	cout << ans;
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

