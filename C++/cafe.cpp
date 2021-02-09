#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,ans = 1,val;
	cin >> n;
	int arr[n];
	int h,m;
	for(int i = 0;i < n; i++){
		cin >> h >> m;
		h *= 60;
		arr[i] = h + m;
	}
	int j = 0;
	for(int i = 0;i < n - 1;){
		j = 1;
		val = 1;
		while(arr[i] == arr[i + j]){
			val++;
			j++;
			ans = max(ans,val);
		}
		i+=j;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}