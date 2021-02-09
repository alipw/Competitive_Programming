#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0;i < n; i++) cin >> a[i];
	sort(a,a+n);
	for(int i = n - 1; i >= 0; i--) cout << a[i] << " ";
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