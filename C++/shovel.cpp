#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long price, r, i = 1;
	cin >> price >> r;
	while(true){
		if(i * price % 10 == 0 || ((i * price) - r) % 10 == 0){
			cout << i;
			break;
		}else{
			i++;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}