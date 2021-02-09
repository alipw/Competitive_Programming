#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,k, ans = 0;
	cin >> n >> k;
	for(int i = 1;i < n+1; i++){
		if(5 * i + k <= 240){
			ans++;
			k += i * 5;
		}
		else
			break;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}