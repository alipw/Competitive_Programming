#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,k,ans = 0;
	cin >> n >> k;
	int data[n];
	for(int i = 0; i < n; i++)
		cin >> data[i];
	for(int i = 0; i < n; i++){
		if(data[i] >= data[k-1] && data[i] > 0)
			ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}