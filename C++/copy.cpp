#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,tmp,ans = 0;
	cin >> n;
	unordered_map<int,int> mp;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		if(mp[tmp] == 0){
			ans++;
			mp[tmp]++;
		}
	}
	cout << ans << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}