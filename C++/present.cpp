#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	int baris = n * 2 + 1;
	for(int i = 0; i < n; i++){
		for(int j = n - i; j >= 1; j--){
			cout << "  ";
		}
		for(int j = 0; j <= i; j++){
			if(i == 0){
				cout << j;
			}else{
				cout << j << " ";
			}
		}
		for(int j = i - 1; j >= 0; j--){
			if(j == 0){
				cout << j;
			}else{
				cout << j << " ";
			}
		}
		cout << endl;
	}
	for(int i = 0; i <= n; i++){
		cout << i << " ";
	}
	for(int i = n - 1; i >= 0; i--){
		if(i == 0){
			cout << i;
		}else{
			cout << i << " ";
		}
	}
	cout << endl;
	for(int i = n -1 ; i >= 0; i--){
		for(int j = n - i; j >= 1; j--){
			cout << "  ";
		}
		for(int j = 0; j <= i; j++){
			if(i == 0){
				cout << j;
			}else{
				cout << j << " ";
			}
		}
		for(int j = i - 1; j >= 0; j--){
			if(j == 0){
				cout << j;
			}else{
				cout << j << " ";
			}
		}
		cout << endl;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
