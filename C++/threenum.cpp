#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int data[4];
	for(int i = 0; i < 4; i++) cin >> data[i];
	sort(data, data+4);
	for(int i = 0;i < 3; i++){
		cout << data[3] - data[i] << " ";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}