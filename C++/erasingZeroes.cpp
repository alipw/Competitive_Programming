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
	string s;
	cin >> s;
	int num0 = 0, n = s.size(),ans = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == '0') num0++;
	}
	for(int i = 0; i < n; i++){
		if(s[i] == '0') num0--;
		else break;
	}
	for(int i = n - 1; i > 0; i--){
		if(s[i] == '0') num0--;
		else break;
	}
	if(num0 < 0) num0 = 0;
	cout << num0;
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

