#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	ull n;
	cin >> n;
	if(n == 0){
		cout << 1;
	}else{
		n %= 4;
		if(n == 0){
			cout << 6; 
		}else if(n == 1){
			cout << 8;
		}else if(n == 2){
			cout << 4;
		}else if (n == 3){
			cout << 2;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}