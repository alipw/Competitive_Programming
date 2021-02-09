#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	if(n == 1){
		cout << -1;
	}else{
		for(int i = 0; i < n; i++){
			cout << (i == n - 1 ? 8 : 9);
		}
	}

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