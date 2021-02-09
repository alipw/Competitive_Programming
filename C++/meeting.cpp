#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int data[3], ans;
	cin >> data[0] >> data[1] >> data[2];
	sort(data,data+3);
	ans = data[1] - data[0] + (data[2] - data[1]);
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}