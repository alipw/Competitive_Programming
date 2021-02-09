#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) cout << "\u001b[36;1m[name : " << #a << "	value : " << (a) << "]\u001b[0m\n";
#define debugArr(a)\
do {\
	cout << "\u001b[36;1m[name : " << #a << "	value : ";\
	for(int i = 0; i < a.size(); i++)\
		cout << a[i] << (i == a.size() - 1 ? "]\u001b[0m\n" : ", ");\
}while(0);
//end of template

const int NAX = 200005;
int cats[NAX];
vector<int> node[NAX]; 
int ans = 0, m = 0,n = 0;

void dfs(int i, int k,int parent){
	if(k > m) return;
	if(node[i].size() == 1 && i != 1){
		ans++;
		return;
	}
	for(auto j:node[i]){
		if(j != parent){
			if(cats[j]) dfs(j,k + 1,i);
			else dfs(j,0,i);
		}
	}
}

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		cin >> cats[i];
	}
	rep(i,n - 1){
		int a,b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}
	dfs(1,cats[1],1);
	cout << ans;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}