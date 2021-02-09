#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	string a;
	cin >> a;
	for(int i = 0;i < a.length(); i++){
		cout << a[i];
	}
	for(int i = a.length() - 1; i >= 0; i--){
		cout << a[i];
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}