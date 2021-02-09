#include <bits/stdc++.h>
#define ar array
using namespace std;

void solve(){
	int k,swap;
	cin >> k >> swap;
	int arr[k];
	int arr2[k];
	for(int a = 0; a < k; a++)
		cin >> arr[a];
	for(int a = 0; a < k; a++)
		cin >> arr2[a];
	sort(arr,arr+k);
	sort(arr2,arr2+k);
	int n = 0,i = k-1;
	while(swap != 0 && i >= 0){
		if(arr[n] < arr2[i]){
			arr[n] = arr2[i];
			swap--;
			n++;
			i--;
		}else
			break;
	}
	int total = 0;
	for(int a = 0; a < k; a++)
		total+=arr[a];
	cout << total << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;

	while(t--){
		solve();
	}
}