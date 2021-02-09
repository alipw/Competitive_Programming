#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unsigned long long int permen;
	cin >> permen;
	if(permen >= 5){
		permen-=2;
		cout << permen;
	}
	else{
		cout << -1;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}