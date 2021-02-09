#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define vc vector
#define umap unordered_map


void solve(){
	int n,m;
	cin >> n >> m;
	umap<string,string> mp;
	string a;
	for(int i = 0; i < m; i++){
		cin >> a;
		cin >> mp[a];
	}
	for(int i = 0;i < n;i++){
		cin >> a;
		if(mp[a].length() < a.length()){
			cout << mp[a];
		}else{
			cout << a;
		}
		cout << " ";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
