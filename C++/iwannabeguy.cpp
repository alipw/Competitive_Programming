#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n , a, g;
	unordered_map<int,int> mp;
	cin >> n;
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> g;
		mp[g]+=1;
	}
	cin >> a;
	for(int i = 0; i < a; i++){
		cin >> g;
		mp[g]+=1;
	}
	bool yes = true;
	for(int i = 1; i <= n; i++){
		if(mp[i] <= 0){
			yes = false;
			break;
		}
	}
	if(yes){
		cout << "I become the guy.";
	}else{
		cout << "Oh, my motherboard!";
	}


}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}