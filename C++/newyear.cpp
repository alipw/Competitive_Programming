#include <bits/stdc++.h>
using namespace std;

void solve(){
	int h,m;
	cin >> h >> m;
	h *= 60;
	h += m;
	cout << 1440 - h << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}