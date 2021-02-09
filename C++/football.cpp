#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str;
	cin >> str;
	int k = 0;
	for(int i = 0;i < str.length() - 1; i++){
		if(str[i] == str[i+1]){
			k++;
		}else{
			k = 0;
		}if(k == 6){
			cout << "YES";
			break;
		}
	}
	if(k < 6) cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}	
