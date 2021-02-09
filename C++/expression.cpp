#include <bits/stdc++.h>
using namespace std;

void solve(){
	int a,b,c,data[6];
	cin >> a >> b >> c;
	data[0] = a + b + c;
	data[1] = (a + b) * c;
	data[2] = a + (b * c);
	data[3] = (a * b) + c;
	data[4] = a * (b + c);
	data[5] = a * b * c;
	sort(data,data+6);
	cout << data[5];
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}