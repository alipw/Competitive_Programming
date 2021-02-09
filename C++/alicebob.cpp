#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long int a, b, c;
	cin >> a >> b >> c;
	long long int total = a + b + c;
	cout << total / 2 << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}