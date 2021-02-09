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


int a1,a2,a0,b1,b2,b0,ans = 0;

void solve(){
	ans = 0;
	cin >> a0 >> a1 >> a2 >> b0 >> b1 >> b2;
	int firstCase = min(a2,b1);
	ans += (firstCase * 2);
	cout << "firstCase : " << firstCase << endl << "ans : " << ans << endl;
	a2 -= firstCase;
	b1 -= firstCase;
	firstCase = min(a1,b0);
	a1 -= firstCase;
	b0 -= firstCase;
	firstCase = min(a0,b0);
	a0 -= firstCase;
	b0 -= firstCase;
	int secondCase = min(a2,b2);
	a2 -= secondCase;
	b2 -= secondCase;
	secondCase = min(a1,b1);
	a1 -= secondCase;
	b1 -= secondCase;
	if(b2 >= a1) ans -= (min(b2,a1) * 2);
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

