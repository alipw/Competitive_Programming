#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ull n;
	cin >> n;
	if(n % 2 == 0){
		ull ans = 1;
		for(int i = 0;i < n / 2; i++){
			ans *= 2;
		}
		cout << ans;
	}else{
		cout << 0;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}