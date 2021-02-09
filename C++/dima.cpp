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
	int n,sum = 0,tmp,ans = 0;
	cin >> n;
	rep(i,n){
		cin >> tmp;
		sum += tmp;
	}
	for(int i = 1; i <= 5; i++){
		int j = 0, k = sum;
		k+=i;
		while(k--){
			j++;
			if(j > n) j = 0;
			if(k == 1) break;
		}
		if(j != 0) ans++;
	}
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}