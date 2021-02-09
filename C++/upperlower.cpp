#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string str;
	int up = 0,down = 0;
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		if(isupper(str[i]))
			up++;
		else
			down++;
	}
	if(up > down){
		for(int i = 0; i < str.length(); i++){
			str[i] = toupper(str[i]);
		}
	}
	else{
		for(int i = 0; i < str.length(); i++){
			str[i] = tolower(str[i]);
		}
	}
	cout << str;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}