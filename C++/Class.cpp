#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	ll n,ans = 0, ans2 = 0;
	cin >> n;
	ll a[n * 2];
	for(int i = 0; i < n * 2; i++) cin >> a[i];
	sort(a,a+(n*2));
	ans = a[n * 2 / 2] - a[n * 2 / 2 - 1];
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}