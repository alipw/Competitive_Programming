#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n,v;
	cin >> n >> v;
	vector<int> ans;
	for(int i = 1; i <= n; i++){
		int k, minn = 10e6 + 1,tmp; 
		cin >> k;
		for(int j = 0; j < k; j++){
			cin >> tmp;
			minn = min(tmp,minn);
		}
		if(minn < v){
			ans.push_back(i);
		}
	}
	cout << ans.size() << endl;
	for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}