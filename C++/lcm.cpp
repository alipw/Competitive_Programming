#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n = 0;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int i = 1;
	bool print;
	while(true){
		print = true;
		for(int j = 0; j < n; j++){
			if(i % arr[j] != 0){
				print = false;
				break;
			}
		}
		if(print){
			cout << i;
			break;
		}else
			i++;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}