#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define vpi vector<pair<int,int>>
#define umap unordered_map

void solve(){
	int n;
	cin >> n;
	umap<string,int> mp;
	string a;
	for(int i = 0; i < n; i++){
		cin >> a;
		mp[a]++;
	}
	int maxx = 0;
	string ans;
	for(auto& i: mp){
		if(i.second > maxx){
			maxx = i.second;
			ans = i.first;
		}
	}
	cout << ans;

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}