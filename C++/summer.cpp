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
	int n,x,y;
	cin >> n >> x >> y;
	int a[n];
	rep(i,n) cin >> a[i];
	bool ok = true;
	for(int i = 0; i < n; i++){
		ok = true;
		for(int j = i; j <= i + y; j++){
			if(j == n) break;
			if(a[i] > a[j]){
				ok = false;
				break;
			}
		}
		for(int j = i; j >= i - x; j--){
			if(j == -1) break;
			if(a[i] > a[j]){
				ok = false;
				break;
			}
		}
		if(ok){
			cout << i + 1;
			break;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
