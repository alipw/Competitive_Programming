#include <bits/stdc++.h>
using namespace std;

void solve(){
	string str, prv = "hello";
	cin >> str;
	int count = 0;
	for(int i = 0, s = 0; i < str.length(); i++){
		if(str[i] == prv[s]){
			count++;
			++s;
		}
	}
	if(count < 5){
		cout << "NO";
	}else{
		cout << "YES";
	}

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
