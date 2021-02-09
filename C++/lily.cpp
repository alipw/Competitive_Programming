#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int d,m,n,ans;
	cin >> n;
	int s[n];
	for(int i = 0;i < n; i++)
		cin >> s[i];
	cin >> d >> m;
	int res = 0;
	for(int i = 0;i < n; i++){
		res = 0;
		for(int j = i; j < i+m; j++){
			res += s[j];
		}
		if(res == d)
			ans++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}