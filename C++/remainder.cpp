#include <bits/stdc++.h>
using namespace std;

void solve(){
	int x, y, n, k, pengali;
	cin >> x >> y >> n;
	pengali = n / x;
	if((pengali * x) + y > n){
		cout << (pengali - 1) * x + y << "\n";
	}else{
		cout << pengali * x + y << "\n";
	}

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}