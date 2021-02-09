#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,k,ans = 0;
	cin >> n >> k;
	int a[n];
	v<int> b;
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n - 1; i++){
		if(a[i] + a[i + 1] >= k){
			continue;
		}else if(a[i] + a[i + 1] < k){
			int val = k - (a[i] + a[i + 1]);
			a[i+1] += val;
			ans += val;

		}
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++) cout << a[i] << " ";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}