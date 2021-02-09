#include <bits/stdc++.h>
using namespace std;

void solve(){
	string n;
	cin >> n;
	string data[5];
	for(int i = 0;i < 5; i++){
		cin >> data[i];
	}
	bool ada = false;
	for(int i = 0;i < 5; i++){
		if(data[i][0] == n[0] || data[i][1] == n[1]){
			ada = true;
		}
	}
	if(ada)cout << "YES\n";
	else cout << "NO\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}