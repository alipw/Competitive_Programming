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
	long n,ans = 0;
	cin >> n;
	for(int i = 1; i <= 9; i++){
		string num = to_string(i);
		for(int j = 0; j < 9; j++){
			if(stol(num) <= n) ans++;
			else break;
			num.pb('0' + i);
		}
	}
	cout << ans;
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

