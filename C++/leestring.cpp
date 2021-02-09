#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	string str;
	cin >> n;
	cin >> str;

	bool yes = false;
	for(int i = 1; i < str.size(); i++){
		if(str[i-1] > str[i])yes = true;
	}
	if(yes){
		string ans;
		for(int i = 0; i < str.size(); i++){
			if(str[i] == '1')break;
			ans.push_back('0');
		}
		ans.push_back('0');
		for(int i = str.size()-1; i >= 0; i--){
			if(str[i] == '0')break;
			ans.push_back('1');
		}
		cout << ans << "\n";
	}else{
		cout << str << "\n";
	}
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