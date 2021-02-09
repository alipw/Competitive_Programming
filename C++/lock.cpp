#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, ans = 0;
	cin >> n;
	string a, b;
	cin >> a >> b;
	for(int i = 0;i < n; i++){
		if(max(a[i] - '0', b[i] - '0') - min(a[i] - '0', b[i] - '0') > 5){
			ans += 10 - (max(a[i] - '0', b[i] - '0') - min(a[i] - '0', b[i] - '0'));
		}else{
			ans += max(a[i] - '0', b[i] - '0') - min(a[i] - '0', b[i] - '0');
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}