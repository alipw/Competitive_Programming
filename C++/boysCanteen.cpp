#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string order;
	int n , t;
	cin >> n >> t;
	cin >> order;
	while(t--){
		//code here
		for(int i = n-1; i > 0; i--){
			if(order[i] == 'G' && order[i-1] == 'B'){
				order[i] = 'B';
				order[i-1] = 'G'; 
				i--;
			}
		}
	}
	cout << order;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}