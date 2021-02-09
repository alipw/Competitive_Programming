#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	int j = 1, i = a[1];
	bool ok = true, ok2 = true;
	//iterate 2 times
	//clockwise
	while(j <= n){
		if(i == n + 1){
			i = 1;
		}
		if(a[j] != i){
			ok = false;
			break;
		}
		j++;
		i++;
	}
	i = a[1];
	j = 1;
	while(j <= n){
		if(i == 0){
			i = n;
		}if(a[j] != i){
			ok2 = false;
			break;
		}
		i--;
		j++;
	}
	if(ok || ok2) cout << "YES";
	else cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}