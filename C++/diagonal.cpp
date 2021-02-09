#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n,d1,d2,ans = 0;
	cin >> n;
	int arr[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}
	int p = 0, j = n-1;
	while(n--){
		 d1 += arr[p][p];
		 d2 += arr[p][j];
		 p++;
		 j--;
	}
	ans = max(d1,d2) - min(d1,d2);
	cout << ans << "\n";
}