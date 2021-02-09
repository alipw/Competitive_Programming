#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int poly;
	cin >> poly;
	if(poly%4 == 0)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
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