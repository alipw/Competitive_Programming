#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,m;
	cin >> n >> m;
	if(n == 1){
		cout << 0 << "\n";
	}else if(n == 2){
		cout << m << "\n";
	}else if(n > 2){
		cout << m * 2 << "\n";
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