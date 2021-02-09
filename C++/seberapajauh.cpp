#include <bits/stdc++.h>
using namespace std;
#define ar array

int x,y,a,b = 0;

void solve(){
	cin >> x >> y;
	cin >> a >> b;
	int ans = max(x,a) - min(x,a) + max(y,b) - min(y,b);
	cout << ans;
}


int main(){
	solve();
}