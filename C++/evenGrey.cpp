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
	int n;
	cin >> n;
	cout << n * 3 + 4 << endl;
	cout << "0 0" << endl << "1 0" << endl;
	for(int i = 1; i < n + 1; i++){
		for(int j = i - 1; j < i + 2; j++) cout << j << " " << i << endl;
	}
	cout << n << " " << n + 1 << endl << n + 1 << " " << n + 1;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
	int n;
}