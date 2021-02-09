#include <bits/stdc++.h>
using namespace std;

void solve(){
	int d1,d2,d3;
	cin >> d1 >> d2 >> d3;
	int data[4];
	data[0] = d1 + d1 + d2 + d2;
	data[1] = d1 + d2 + d3;
	data[2] = d1 + d3 + d3 + d1;
	data[3] = d2 + d3 + d3 + d2;
	sort(data,data+4);
	cout << data[0];
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}