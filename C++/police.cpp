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
	for(int i = 0; i < n; i++){
		if(data[i] >= 1){
			int j = i;
			while(data[i] > 0 && j < n){
				if(data[j] == -1){
					data[j] = 0;
					data[i]--;
				}
				j++;
			}
		}
	}
	int ans = 0;
	for(int i = 0;i < n; i++){
		if(data[i] == -1){
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