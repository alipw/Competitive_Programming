#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int data[n];
	for(int i = 0;i < n; i++){
		cin >> data[i];
	}
	int maxx = data[0],minn = data[0], ans = 0;
	for(int i = 0;i < n; i++){
		if(data[i] > maxx){
			ans++;
			maxx = data[i];
		}
		if(data[i] < minn){
			ans++;
			minn = data[i];
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}