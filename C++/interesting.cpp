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

void solve(){
	int n,ans = 0;
	cin >> n;
	string s;
	s = to_string(n);
	rep(i,s.size()){
		ans += s[i] - '0';
	}
	while(ans % 4 != 0){
		n++;
		s = to_string(n);
		ans = 0;
		rep(i,s.size()){
			ans += s[i] - '0';
		}
	}
	cout << n;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
