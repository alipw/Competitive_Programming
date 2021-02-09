#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long a,b = 0;
	cin >> a >> b;
	long ans1 = a, ans2 = b;
	while(ans1 != ans2){
		if(ans1 < ans2)
			ans1+=a;
		else if(ans1 > ans2)
			ans2+=b;
	}
	cout << ans1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}