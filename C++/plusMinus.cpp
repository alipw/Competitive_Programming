#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	float pos, neg, zer = 0;
	float ans1, ans2, ans3;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];

	for(int i = 0; i < n; i++){
		if(arr[i] > 0)
			pos++;
		else if(arr[i] < 0)
			neg++;
		else
			zer++;
	}
	ans1 = (pos/n);
	ans2 = (neg/n);
	ans3 = (zer/n);
	cout << ans1 << endl;
	cout << ans2 << endl;
	cout << ans3 << endl;
}