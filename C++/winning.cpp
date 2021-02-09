#include <bits/stdc++.h>
using namespace std;

solve(){
	int n;
	cin >> n;
	string winner,names[n];
	int scores[n], maxx = 0;
	unordered_map<string,int>mp;
	for(int i = 0;i < n; i++){
		cin >> names[i] >> scores[i];
		mp[names[i]] += scores[i];
	}
	for(int i = 0; i < n; i++){
		maxx = max(mp[names[i]],maxx);
	}
	unordered_map<string,int> mp2;
	for(int i = 0;i < n; i++){
		mp2[names[i]] += scores[i];
		if(mp[names[i]] == maxx && mp2[names[i]] >= maxx){
			winner = names[i];
			break;
		}
	}
	cout << winner;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}