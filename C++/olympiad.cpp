#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of define

void solve(){
	int n;
	cin >> n;
	int data[n],ans[n], total = 0;
	for(int i = 0;i < n; i++) cin >> data[i];
	int g = 0;
	bool ada = false;
	umap<int,int> mp;
	rep(i,n){
		if(data[i] != 0){
			for(int j = 1; j <= 3; j++){
				for(int k = i; k < n; k++){
					if(data[k] == j){
						mp[j] = k+1;
						data[k] = 0;
						ada = true;
						break;
					}
				}
				if(!ada) break;
			}
			if(mp[1] != 0 && mp[2] != 0 && mp[3] != 0){
				total++;
				for(int k = g, s = 1; k < g+3; k++,s++){
					ans[k] = mp[s];
					mp[s] = 0;
				}
				g+=3;
			}else{
				break;
			}
		}
	}
	if(total == 0) cout << 0;
	else{
		cout << total << "\n";
		rep(j,g) cout << ans[j] << " ";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
