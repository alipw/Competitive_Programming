#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, a;
	cin >> n;
	while(n--){
		cin >> a;
		if(a % 2 == 0){
			cout << a / 2 - 1;
		}else{
			cout << a / 2;
		}
		cout << "\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}