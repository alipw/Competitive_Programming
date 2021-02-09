#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n,k, ans = 0;
	cin >> n >> k;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int i = k, j = k;
	while(i <= n || j > 0){
		if(i > n){
			if(a[j] == 1){
				ans++;
			}
		}else if(j <= 0){
			if(a[i] == 1){
				ans++;
			}
		}else if(i <= n && j > 0){
			if(a[i] == 1 && a[j] == 1){
				if(i == j)
					ans++;
				else
					ans+=2;
			}
		}
		++i;
		--j;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}