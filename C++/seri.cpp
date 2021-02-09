#include <bits/stdc++.h>
using namespace std;

void solve(){
	unsigned long long int awal,akhir,a,b,ans;
	cin >> awal >> akhir >> a >> b;
	for(unsigned long long int i = awal; i <= akhir; i++){
		if(i % a == 0 or i % b == 0){
			ans++;
		}else if(i % a == 0 and i % b == 0){
			ans--;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}