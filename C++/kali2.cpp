#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unsigned long long int n = 0,ans = 1;
	cin >> n;
	unsigned long long int data[n];
	for(unsigned long long int i = 0; i < n; i++){
		cin >> data[i];
	}
	for(unsigned long long int i = 0; i < n; i++){
		ans *= data[i];
		if(ans > 1000000000000000000){
			ans = 1000000000000000001;
			break;
		}
	}
	if(ans > 1000000000000000000)
		cout << -1;
	else
		cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}