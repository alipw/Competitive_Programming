#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int a,b,ans = 0;
	cin >> a >> b;
	if(a % b != 0){
		if(a > b){
			int multiplier = a / b + 1;
			b *= multiplier;
			ans = b - a;
		}else{
			ans = b - a;
		}
	}
	cout << ans <<"\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}