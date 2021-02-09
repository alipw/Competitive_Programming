#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,total = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];	
	sort(a,a+n);	
	int maxx = 0;
	umap<int,int> mp;
	for(int i = 0; i < n; i++){
		if(mp[a[i]] == 0){
			total++;
			mp[a[i]]++;
		}else{
			mp[a[i]]++;
		}
		maxx = max(maxx,mp[a[i]]);
	}
	cout << maxx << " " << total;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}