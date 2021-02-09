#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, m ,c;
	cin >> n;
	unordered_map<char,int> mp;
	for(int i = 0;i < n;i++){
		cin >> m >> c;
		if(m > c){
			mp['m']++;
		}else if(c > m){
			mp['c']++;
		}
	}
	if(mp['m'] > mp['c'])
		cout << "Mishka";
	else if(mp['c'] > mp['m'])
		cout << "Chris";
	else
		cout << "Friendship is magic!^^";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}