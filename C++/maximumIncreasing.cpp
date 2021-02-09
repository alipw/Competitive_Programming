#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
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
	 int n = 0;
	 int ans = 1;
	 cin >> n;
	 int a[n];
	 for(int i = 0; i < n; i++){
	 	cin >> a[i];
	 }
	 int maxx = 1;
	 for(int i = 0; i < n - 1; i++){
	 	if(a[i + 1] > a[i]) maxx++;
	 	else maxx = 1;
	 	ans = max(maxx,ans);
	 }
	 cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
