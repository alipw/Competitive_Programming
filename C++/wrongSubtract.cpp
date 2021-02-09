#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n , k;
	cin >> n >> k;
	while(k--){
		if(n % 10 == 0)
			n/=10;
		else
			n--;
	}
	cout << n;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}