#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	char a;
	bool colored = false;
	for(int i = 0;i < n * m; i++){
		cin >> a;
		if(a == 'M' || a == 'C' || a == 'Y'){
			colored = true;
			break;
		}
	}
	if(colored)
		cout << "#Color\n";
	else
		cout << "#Black&White\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}