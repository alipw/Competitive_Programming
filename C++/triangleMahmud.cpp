#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ll n;
	cin >> n;
	ll a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	bool bisa = false;
	for(int i = 0; i < n-2; i++){
		if(a[i] + a[i + 1] > a[i + 2]){
			bisa = true;
			cout << "YES";
			break;
		}
	}
	if(!bisa) cout << "NO";
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}