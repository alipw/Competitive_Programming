#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, tmp, ans = 0;
	cin >> n;
	int arr[n];
	for(int i = 0;i < n; i++){
		cin >> arr[i];
	}
	tmp = arr[0];
	for(int i = 1; i < n; i++){
		if(i == 1){
			if(tmp > arr[i])
				ans++;
			else
				tmp = arr[i];
		}else{
			if(tmp > arr[i])
				ans++;
			else
				tmp = arr[i];
		}
	}
	cout << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, i = 1;
	cin >> t;
	while(t--){
		cout << "Case #" << i << ": ";
		solve();
		++i;
	}
}