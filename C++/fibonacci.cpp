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

ull memo[100000];

ull fib(ull n){
	ull result;
	if(memo[n] != 0){
		result = memo[n];
	}
	if(n == 1 || n == 2){
		result = 1;
	}
	else{
		result = fib(n - 1) + fib(n - 2);
	}
	memo[n] = result;
	return result;
}

void solve(){
	ull tmp;
	memset(memo,0,sizeof(memo));
	cin >> tmp;
	cout << fib(tmp);
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
