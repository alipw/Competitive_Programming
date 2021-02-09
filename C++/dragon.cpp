#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int d, ans = 0, value[4];
	for(int i = 0; i < 4; i++)
		cin >> value[i];
	cin >> d;
	bool add;
	for(int i = 1; i <= d; i++){
		add = false;
		for(int j = 0; j < 4; j++){
			if(i % value[j] == 0){
				add = true;
				break;
			}
		}
		if(add)
			ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}