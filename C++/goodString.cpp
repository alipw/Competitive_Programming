#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template

string a;

void solve(){
	cin >> a;
	int n = a.size(),ans = 0,maxx = 0;
	umap<int,int> mp;
	rep(i,n){
		mp[a[i]]++;
		maxx = max(mp[a[i]],maxx);
	}
	int maxl = 0;
	rep(first,10){
		rep(second,10){
			int len = 0;
			for(auto x : a){
				if(len % 2 == 0){
					if(x - '0' == first) len++;
				}else{
					if(x - '0' == second) len++;
				}
			}
			maxl -= maxl%2;
			maxl = max(len,maxl);
		}
	}
	maxl = max(maxl,maxx);
	cout << n - maxl;
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

