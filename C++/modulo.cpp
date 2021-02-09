#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n = 0,ans = 1;
	cin >> n;
	int data[n];
	for(int i = 0; i < n; i++){
		cin >> data[i];
	}
	sort(data,data+n);
	for(int i = n-1; i >= 0; i--){
		if(data[i] == data[i-1]){
			ans+=1;
		}else{
			break;
		}
	}
	cout << data[n-1] << " " << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}