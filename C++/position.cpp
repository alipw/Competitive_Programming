#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int a,b,n, ans = 0;
	cin >> n >> a >> b;
	ans = min(n - a,b + 1);
	cout << ans; 
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}