#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	int a[n + 1], ans[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		ans[i] = 1;
		int pointer = i;
		while(a[pointer] != i){
			pointer = a[pointer];
			ans[i]++; 
		}
	}
	for(int j = 1; j <= n; j++) cout << ans[j] << " ";
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