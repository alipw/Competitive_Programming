#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unordered_map<int,int> mp;
	int n,k, ans = 0;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> k;
		mp[k]+=1;
	}
	for(int i = 1 ;i <= 5; i++){
		if(mp[i] > mp[ans]){
			ans = i;
		}
	}
	cout << ans;

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}