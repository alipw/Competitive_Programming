#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long long int n;
	cin >> n;
	if(n % 2 == 1){
		n+=1;
		n/=2;
		n = n - (n*2);
		cout << n;
	}
	else
		cout << n / 2;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}