#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin >> str;
	for(int i = 0;i < str.length();i++){
		str[i] = tolower(str[i]);
	}
	unordered_map<char,int> mp;
	mp['a'] = 1;
	mp['i'] = 1;
	mp['u'] = 1;
	mp['e'] = 1;
	mp['o'] = 1;
	mp['y'] = 1;
	for(int i = 0;i < str.length(); i++){
		if(mp[str[i]] == 0){
			cout <<"." << str[i];
		}
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}