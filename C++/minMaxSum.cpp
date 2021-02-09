#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long arr[5];
	long ans1,ans2;
	for(int i = 0; i < 5; i++)
		cin >> arr[i];
	sort(arr,arr+5);
	ans1 = arr[0] + arr[1] + arr[2] + arr[3];

	ans2 = arr[1] + arr[2] + arr[3] + arr[4];

	cout << ans1 << " " << ans2 << endl;
}