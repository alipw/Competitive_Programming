#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	float a,b;
	cin >> a >> b;
	float ans = 7 - max(a,b);
	if(ans == 1){
		cout << "1/6";
	}else if(ans == 2){
		cout << "1/3";
	}else if(ans == 3){
		cout << "1/2";
	}else if(ans == 4){
		cout << "2/3";
	}else if(ans == 5){
		cout << "5/6";
	}else if(ans == 6){
		cout << "1/1";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
