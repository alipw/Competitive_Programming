#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long int n,m, ans = 0, posisi = 1;
	cin >> n >> m;
	long long int a[m];
	for(long long int i = 0; i < m; i++){
		cin >> a[i];
	}
	for(long long int i = 0; i < m; i++){
		if(posisi > a[i]){
			ans += a[i] + n - posisi;
			posisi = a[i];
		}else{
			ans += a[i] - posisi;
			posisi = a[i];
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}