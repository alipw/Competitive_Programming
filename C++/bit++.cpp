#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string code;
	int n, ans = 0;
	cin >> n;
	for(int i = 0; i < n;i++){
		cin >> code;
		if(code[1] == '+')
			ans++;
		else
			ans--;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}