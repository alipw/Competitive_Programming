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
	int n,offplus = 0, offmin = 0;
	cin >> n;
	int a[n];
	rep(i,n) cin >> a[i];
	rep(i,n){
		if(a[i] > 0 && a[i] % 2 && offplus == 0){
			offplus++;
			cout << a[i] / 2 + 1;
		}else if(a[i] < 0 && a[i] % 2 && offmin == 0){
			offmin++;
			cout << a[i] / 2 - 1;
		}else if(a[i] > 0 && a[i] % 2 && offplus != 0){
			cout << a[i] / 2;
			offplus--;
		}else if(a[i] < 0 && a[i] % 2 && offmin != 0){
			cout << a[i] / 2;
			offmin--;
		}else{
			cout << a[i] / 2;
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
