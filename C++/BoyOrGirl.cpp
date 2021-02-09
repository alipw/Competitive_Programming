#include<bits/stdc++.h>
using namespace std;
#include<unordered_map>
#define ar array

void solve(){
	string str;
	cin >> str;
	int ans = 0;
	unordered_map<char,int> map;
	for(int i = 0; i < str.length(); i++){
		if(map[str[i]] < 1){
			ans++;
			map[str[i]]++;
		}
	}
	if(ans%2 == 0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}