#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, tmp = 0, ans = 0;
	cin >> n;
	int data[n][2];
	for(int i = 0; i < n; i++){
		cin >> data[i][0] >> data[i][1];
	}
	for(int i = 0; i < n; i++){
		tmp = tmp - data[i][0] + data[i][1];
		if(tmp > ans)
			ans = tmp;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}