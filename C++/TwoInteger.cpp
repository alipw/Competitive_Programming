#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)

void solve(){
	int a,b;
	cin >> a >> b;
	if(a == b) cout << 0;
	else if(max(a,b) - min(a,b) <= 10) cout << 1;
	else{
		int gap = max(a,b) - min(a,b),ans = 0;
		if(gap % 10 != 0) ans++;
		ans += gap / 10;
		cout << ans;
	}
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
	return 0;
}