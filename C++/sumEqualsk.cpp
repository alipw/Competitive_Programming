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
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	umap<int,int> mp;
	rep(i,n) {
		cin >> a[i];
		mp[a[i]] = 1;
	}
	for(auto x:a){
		if(mp[k - x]){
			cout << "YES";
			return;
		}
	}
	cout << "NO"; 
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

