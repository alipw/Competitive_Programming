#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n = 0;
	cin >> n;
	int data[n], maxx = 0, ans = 0;
	for(int i = 0; i < n; i++){
		cin >> data[i];
		maxx = max(data[i],maxx);
	}
	for(int i = 0;i < n; i++){
		ans += maxx - data[i];
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}