#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,m;
	cin >> n >> m;
	for(int i = 0;i < n; i++){
		for(int j = 0; j < m; j++){
			if(j == 0 && i == 0){
				cout << "W";
			}else{
				cout << "B";
			}
		}
		cout << endl;
	}
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