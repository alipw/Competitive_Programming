#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin >> str;
	bool is = true, first = false;
	//jika semua letter setelah 0 adalah uppercase maka itu adalah uppercase caps
	for(int i = 0; i < str.length(); i++){
		if(str[i] == tolower(str[i]) && i != 0){
			is = false;
			break;
		}
	}
	if(is && str[0] == toupper(str[0])){
		first = true;
	}
	if(is && !first){
		str[0] = toupper(str[0]);
		for(int i = 1; i < str.length(); i++){
			str[i] = tolower(str[i]);
		}
		cout << str;
	}
	if(first && is){
		for(int i = 0; i < str.length(); i++){
			str[i] = tolower(str[i]);
		}
		cout << str;
	}
	else if(!is && !first){
		cout << str;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
