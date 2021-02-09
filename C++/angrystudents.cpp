#include <bits/stdc++.h>
#define ar array
using namespace std;


void solve(){
	int k = 0,ans = 0,tmp = 0;
	cin >> k;
	string str;
	cin >> str;
	for(int i = 0; i < k; i++){
		int j = i+1;
		tmp = 0;
		while(str[i] == 'A' && str[j] == 'P'){
			j++;
			tmp++;
		}
		if(tmp > ans)
			ans = tmp;
	}
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--)
		solve();
}