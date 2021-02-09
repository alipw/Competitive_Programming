#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int arr[n+1],arr2[n+1];
	for(int i = 1; i < n+1; i++){
		cin >> arr[i];
	}
	for(int i = 1; i < n+1; i++){
		//refer to the index of value arr[i]
		//arr[i] == 5 then arr[arr[i]] == 4
		//int index = arr[arr[i]] = 4
		//arr2[index] || arr2[arr[arr[i]]]
		arr2[arr[arr[i]]] = arr[i];
	}
	for(int i = 1; i <= n; i++){
		cout << arr2[i] << " ";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}