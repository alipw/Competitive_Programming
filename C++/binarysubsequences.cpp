#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template


void solve(){
	int n, j = 0;
	cin >> n;
	string s;
	cin >> s;
	vector<int> ans;
	string subs[n];
	memset(subs,0,sizeof(subs));
	vector<int> pos1,pos0;
	for(int i = 0; i < n; i++){
		if(s[i] == '0'){
			if(pos1.empty()){
				subs[j].push_back(s[i]);
				pos0.push_back(j);
				j++;
				ans.push_back(j);
			}else{
				subs[pos1.back()].push_back(s[i]);
				ans.push_back(pos1.back() + 1);
				pos0.push_back(pos1.back());
				pos1.pop_back();
			}
		}
		if(s[i] == '1'){
			if(pos0.empty()){
				subs[j].push_back(s[i]);
				pos1.push_back(j);
				j++;
				ans.push_back(j);
			}else{
				subs[pos0.back()].push_back(s[i]);
				ans.push_back(pos0.back() + 1);
				pos1.push_back(pos0.back());
				pos0.pop_back();
			}
		}
	}
	cout << j << endl;
	for(auto i : ans) cout << i << " ";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
}

