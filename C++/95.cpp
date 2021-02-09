#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n,tmp;
	cin >> n;
	int counter = 0;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		if(tmp == 0){
			counter++;
		}
	}
	int c5 = n - counter;
	if(counter != 0){
		for(int i = 0; i < c5 / 9; i++){
			for(int j = 0; j < 9; j++){
				cout << 5;
			}
		}
		if(c5 / 9 >= 1){
			for(int i = 0; i < counter; i++) cout << 0;
		}else{
			cout << 0;
		}
	}else{
		cout << -1;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
