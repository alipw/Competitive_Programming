#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string alphabets = "abcdefghijklmnopqrstuvwxyz", str = "";
	int n;
	cin >> n >> str;
	unordered_map<char,int> mp;
	for(int i = 0; i < n; i++) mp[tolower(str[i])]++;
	bool pangram = true;
	for(int i = 0; i < alphabets.length(); i++){
		if(mp[alphabets[i]] < 1){
			pangram = false;
			break;
		}
	}
	if(pangram)
		cout << "YES";
	else
		cout << "NO";
	}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}