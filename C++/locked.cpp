#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n, ans = 0;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n - i; j++){
			ans += i;
		}
		ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
