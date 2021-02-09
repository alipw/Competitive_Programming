#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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

umap<int,vector<int>> mp;
int n,m = 0,ans = 0;
vector<int> cats(200005);

void dfs(int k,int i){
	if(k > m) {
		cout << "TOO MUCH CAT : " << i << endl;
		return;
	}
	if(mp[i].size() == 0){
		ans++;
		cout << "ROOT : " << i << endl;
		return;
	}
	for(auto j:mp[i]){
		if(cats[j])
			dfs(k + 1,j);
		else
			dfs(0, j);
	}
}

void solve(){ 
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> cats[i];
	}
	int start = 0;
	rep(i,n - 1){
		int a,b;
		cin >> a >> b;
		mp[min(a,b)].push_back(max(a,b));
		start = b;
	}
	for(int i = 1; i < mp.size(); i++){
		cout << i << " : ";
		for(int j = 0; j < mp[i].size(); j++){
			cout << mp[i][j] << " ";
		}
		cout << endl;
	}
	dfs(cats[1],start);
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

