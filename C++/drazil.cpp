#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	ll a,b,s;
	cin >> a >> b >> s;
	a = sqrt(a * a);
	b = sqrt(b * b); 
	if((a + b) > s){
		cout << "No";
	}else{
		if((s - (a + b)) % 2 == 0){
			cout << "Yes";
		}else{
			cout << "No";
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
