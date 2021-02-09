#include <bits/stdc++.h>
using namespace std;
#define ar array
#define umap unordered_map
#define rep(i,n) for(int i = 0; i < n; i++)

// int ans = 0,start = 0;
// umap<int,int> mp;
// const int nax = 1005;
// vector<int> node[nax];

// void dfs(int i,int parent){
// 	if(node[i].size() == 1 && i != start) return;
// 	else{
// 		for(auto x:node[i]){
// 			mp[x] = 1;
// 			if(x != parent) {
// 				dfs(x,i);
// 				cout << "GOING INTO : " << x << endl;
// 			}
// 		}
// 	}
// }

// void solve(){
// 	int n,m;
// 	cin >> n >> m >> start;
// 	umap<int,int> already_exist;
// 	vector<int> val;
// 	rep(i,m){
// 		int a,b;
// 		cin >> a >> b;
// 		node[a].push_back(b);
// 		node[b].push_back(a);
// 		if(!already_exist[a]){
// 			already_exist[a] = 1;
// 			val.push_back(a);
// 		}
// 		if(!already_exist[b]){
// 			already_exist[b] = 1;
// 			val.push_back(b);
// 		}
// 	}
// 	for(int i = 0; i < n; i++){
// 		cout << i << " : ";
// 		for(int j = 0; j < node[i].size(); j++){
// 			cout << node[i][j] << " ";
// 		}
// 		cout << endl;
// 	}
// 	dfs(start,start);
// 	for(auto x:val){
// 		cout << x << " ";
// 	}

// }

void solve(){
	int n,m,start = 0;
	umap<int,int> mp;
	cin >> n >> m >> start;
	mp[start] = 1;
	umap<int,int> already_exist;
	vector<int> data;
	rep(i,m){
		int a,b;
		cin >> a >> b;
		if(mp[a] == 1 || mp[b] == 1){
			mp[a] = 1;
			mp[b] = 1;
		}
		if(!already_exist[a]){
			already_exist[a] = 1;
			data.push_back(a);
		}
		if(!already_exist[b]){
			already_exist[b] = 1;
			data.push_back(b);
		}
	}
	sort(data.begin(), data.end());
	for(auto x:data){
		if(mp[x]) cout << x << " ";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}