#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n , ans = 1, tmp = 0;
	cin >> n;
	string data,data2;
	for(int i = 0; i < n; i++){
		cin >> data2;
		data += data2;
	}
	for(int i = 0; i < n * 2 - 1; i++){
		if(data[i] == data[i+1]){
			ans++;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}