#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,ans = 0;
	cin >> n;
	int totalAns,temp = 0;
	for(int i = 0; i < n; i++){
		totalAns = 0;
		for(int j = 0; j < 3; j++){
			cin >> temp;
			totalAns += temp;
		}
		if(totalAns >= 2){
			ans++;
		}
	}
	cout << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}