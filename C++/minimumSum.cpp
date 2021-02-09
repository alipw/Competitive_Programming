#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n, tmp;
	cin >> n;
	int minn = 10000000 + 1, a[n];
	for(int i = 0; i < n; i++){
		cin >> tmp;
		a[i] = tmp;
		minn = min(tmp, minn);
	}
	if(minn == 1){
		cout << -1;
	}else{
		cout << 1;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
