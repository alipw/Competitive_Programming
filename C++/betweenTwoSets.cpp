#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int m,n,ans = 0;
	cin >> m >> n;
	int arra[m],arrb[n];
	for(int i = 0;i < m; i++)
		cin >> arra[i];
	for(int i = 0;i < n; i++)
		cin >> arrb[i];
	int i = arrb[0];
	int num = arra[m-1];
	while(num <= arrb[0]){
		bool add = true;
		for(int i = 0; i < m; i++){
			if(num % arra[i] != 0){
				add = false;
				break;
			}
		}
		for(int i = 0; i < n; i++){
			if(arrb[i] % num != 0){
				add = false;
				break;
			}	
		}
		if(add)
			ans++;
		num++;
		
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}