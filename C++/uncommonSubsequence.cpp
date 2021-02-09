#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	string a,b;
	cin >> a >> b;
	if(a == b){
		cout << -1;
	}else{
		cout << max(a.length(), b.length());
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}