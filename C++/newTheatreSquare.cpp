#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,m,x,y;
	cin >> n >> m >> x >> y;
	char a[n][m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	int ans1 = 0,ans2 = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == '.'){
				ans1 += x;
				if(a[i][j + 1] == '.' && j + 1 != m){
					ans2+=y;
					ans1+=x;
					j+=1;
				}else{
					ans2 += x;
				}
			}
		}
	}
	cout << min(ans1,ans2);
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