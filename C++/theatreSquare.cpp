#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	ull a,b,n,ma = 0,mb = 0;
	cin >> a >> b >> n;
	if(a <= n && b <= n){
		cout << 1;
	}else{
		if(a % n != 0){
			ma++;
		}
		ma += a / n;
		if(b % n != 0){
			mb++;
		}
		mb += b / n;
		cout << ma * mb;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}