#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, ans = 0;
	cin >> n;
	int data[n];
	for(int i = 0;i < n-1; i++){
		cin >> data[n];
	}
	ans += data[0];
	for(int i = 0;i < n-1; i++){
		if(data[i] < data[i+1]){
			ans += data[i+1];
		}else if (data[i] > data[i+1]){
			ans-=data[i+1];
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}