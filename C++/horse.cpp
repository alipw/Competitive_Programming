#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unordered_map<int,int> mp;
	int g, ans = 0;
	for(int i = 0; i < 4;i++){
		cin >> g;
		mp[g]++;
		if(mp[g] > 1)
			ans++;
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}