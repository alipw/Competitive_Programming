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
	int total,a,move;
	cin >> total >> a >> move;
	if(move == 0){
		cout << a;
	}else if(move > 0){
		int pos = a;
		while(move--){
			pos++;
			if(pos == total + 1) pos = 1;
		}
		cout << pos;
	}else if(move < 0){
		int pos = a;
		while(move++){
			pos--;
			if(pos <= 0) pos = total;
		}
		cout << pos;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}