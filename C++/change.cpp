#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int a,b,n,s;
	cin >> a >> b >> n >> s;
	int terdekat = (s / n);
	if(terdekat > a){
		terdekat = a;
	}
	if(terdekat * n + b < s){
		cout << "NO";
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