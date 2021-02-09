#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n,m, ans = 0, tmp = 0;
	cin >> n >> m;
	vector<pair<int,int>> a;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		a.push_back(make_pair(tmp,i));
	}
	int i = 0;
	while(a.size() > 1){
		if(i == a.size()){
			i = 0;
		}else{
			if(a[i].first <= m){
				a.erase(a.begin() + i);
			}else{
				a[i].first -= m;
				i++;
			}
		}
	}
	cout << a[0].second + 1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}