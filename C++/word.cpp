#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string str;
	cin >> str;
	if(str.length() > 10){
		int length = str.length() - 2;
		cout << str[0] << length << str[str.length()-1];
	}else{
		cout << str;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n ;
	cin >> n;
	while(n--){
		solve();	
		cout << "\n";
	}
	
}