#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	// int n,m;
	// cin >> n >> m;
	// int a[n],b[m];
	// rep(i,n) cin >> a[i];
	// rep(i,m) cin >> b[i];
	// rep(i,n){
	// 	rep(j,m){
	// 		if(a[i] == b[j]){
	// 			cout << "YES" << endl;
	// 			cout << 1 << " " << a[i];
	// 			return;
	// 		}
	// 	}
	// }
	// cout << "NO";

	int n,m;
	cin >> n >> m;
	int a[n],b[m];
	umap<int,bool> mp;
	rep(i,n){
		cin >> a[i];
		mp[a[i]] = 1;
	}
	rep(i,m){
		cin >> b[i];
	}
	rep(i,m){
		if(mp[b[i]]){
			cout << "YES\n";
			cout << 1 << " " << b[i]; 
			return;
		}
	}
	cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << endl;
	}
	return 0;
}
