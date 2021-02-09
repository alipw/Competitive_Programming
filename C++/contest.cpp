#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, k, ans = 0;
	cin >> n >> k;
	int data[n];
	for(int i = 0; i < n; i++) cin >> data[i];
	sort(data,data+n);
	for(int i = n-1; i >= 0;){
		if(data[i] + k <= 5 && i >= 2){
			ans++;
			i -= 3;
		}else{
			--i;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}