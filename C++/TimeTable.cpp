#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	string s;
	cin >> s;
	int j = 0,ans = 0;
	for(int i = 1; i < s.size(); i++){
		if(s[i] == '1'){
			j++;
			break;
		}
	}
	if(j != 0 && s.size() % 2 != 0){ 
		ans++;
	}
	ans += s.size() / 2;
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}