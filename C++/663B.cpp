#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	int n,m,ans = 0;
	cin >> n >> m;
	vector<string> s(n);
	rep(i,n) cin >> s[i];
	for(int i = 0; i < m - 1; i++){
		if(s[n - 1][i] != 'R') ans++;
	}
	for(int i = 0; i < n - 1; i++){
		if(s[i][m - 1] != 'D') ans++;
	}
	cout << ans;
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
