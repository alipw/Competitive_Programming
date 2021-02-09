#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string stones;
	int n, ans = 0;
	cin >> n;
	cin >> stones;
	for(int i = 0; i < n; i++){
		if(stones[i] == stones[i + 1]){
			ans++;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}