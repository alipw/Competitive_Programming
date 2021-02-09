#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	ll a,b;
	cin >> a >> b;
	if(a <= 3){
		if(a == 2 && b == 3){
			cout << "YES";
		}
		else if(a == b){
			cout << "YES";
		}else if(b < a){
			cout << "YES";
		}else{
			cout << "NO";
		}
	}else{
		cout << "YES";
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