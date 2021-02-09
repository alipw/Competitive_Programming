#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	int arr[n];
	int ans1 = 1;

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	sort(arr,arr+n);

	int f = n-1;
	while(arr[f] == arr[f-1]){
		f--;
		ans1++;
	}

	cout << ans1;
}