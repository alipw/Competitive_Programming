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
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	int n;
	cin >> n;
	umap<int,int> mp;
	umap<int,int> mp2;
	for(int i = 0; i < n * n; i++){
		int a,b;
		cin >> a >> b;
		if(mp[a] == 0 && mp2[b] == 0){
			mp[a] = 1;
			mp2[b] = 1;
			cout << i + 1 << " ";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

