#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	int x;
	bool easy = true;
	for(int i = 0; i < n; i++){
		cin >> x;
		if(x == 1){
			easy = false;
			break;
		}
	}
	if(easy)
		cout << "EASY";
	else
		cout << "HARD";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}