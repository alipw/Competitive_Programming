#include <bits/stdc++.h>
using namespace std;

void solve(){
	unordered_map<char,int> mp;
	char a;
	cin >> mp['1'] >> mp['2'] >> mp['3'] >> mp['4'];
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0;i < s.length(); i++){
		ans += mp[s[i]];
	}
	cout << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
