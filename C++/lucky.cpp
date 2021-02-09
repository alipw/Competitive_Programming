#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int ans = 0;
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == '7' || str[i] == '4')
			ans++;
	}
	if(ans == 4 || ans == 7)
		cout << "YES";
	else
		cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}