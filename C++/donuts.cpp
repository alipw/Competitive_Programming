#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ull a,b,c;
	cin >> a >> b >> c;
	if(a * 1 >= c){
		cout << -1;
	}else{
		cout << 1;
	}
	cout << " ";
	if(c < a * b){
		cout << b;
	}else{
		cout << -1;
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