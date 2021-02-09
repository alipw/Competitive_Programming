#include <bits/stdc++.h>
using namespace std;

void solve(){
	string data = "abcdefghijklmnopqrstuvwxyz";
	unordered_map<char,int> mp;
	for(int i = 1;i < 27; i++){
		mp[data[i-1]] = i;
	}
	string str;
	cin >> str;
	int ans = 0;
	if(mp[str[0]] - 1 > 13){
		ans += 26 - (mp[str[0]] - 1);
	}else{
		ans += mp[str[0]] - 1;
	}
	for(int i = 0;i < str.length()-1; i++){
		if(max(mp[str[i]], mp[str[i+1]]) - min(mp[str[i]], mp[str[i+1]]) > 13)
			ans += (26 - (max(mp[str[i]], mp[str[i+1]]) - min(mp[str[i]], mp[str[i+1]])));
		else
			ans += (max(mp[str[i]], mp[str[i+1]]) - min(mp[str[i]], mp[str[i+1]]));
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
