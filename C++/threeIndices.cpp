#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template


void solve(){
	int n,minn = 1005, maxx = 0;
	cin >> n;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	for(int i = 1; i < n - 1; i++){
		if(a[i] > a[i + 1] && a[i] > a[i - 1]){
			cout << "YES\n";
			cout << i << " " << i + 1 << " " << i + 2;
			return;
		}
	}
	cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
}

