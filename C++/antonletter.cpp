#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string str;
	int ans = 0;
	getline(cin,str);
	unordered_map<char,int> mp;
	for(int i = 1; i < str.length()-1; i += 3){
		if(mp[str[i]] == 0){
			ans++;
			mp[str[i]] += 1;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}