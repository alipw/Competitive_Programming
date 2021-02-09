#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int k,n,w,pay = 0;
	cin >> k >> n >> w;
	for(int i = 1; i <= w; i++){
		pay += k * i;
	}
	if(n >= pay)
		cout << 0;
	else
		cout << pay-n;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}