#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}

void solve(){
	ll l,r;
	cin >> l >> r;
	//i know that l <= r
	//the range are 2 and 10e9
	if(l == r){
		if(l % 2 == 0){
			cout << 2;
		}else{
			cout << l;
		}
	}else{
		cout << 2;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
