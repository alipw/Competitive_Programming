#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int arr[n];
	int maxx,minn,max_index,min_index;
	maxx = 0;
	minn = 101;
	for(int i = 0;i < n; i++) cin >> arr[i];
	for(int i = 0;i < n; i++){
		if(arr[i] > maxx){
			maxx = arr[i];
			max_index = i;
		}
		if(minn >= arr[i]){
			minn = arr[i];
			min_index = i;
		}
	}
	n--;
	if(max_index > min_index){
		min_index++;
	}
	cout << max_index + n - min_index;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}