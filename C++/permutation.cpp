#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, a = 0;
	cin >> n;
	unordered_map<int,int> mp;
	for(int i = 0;i < n * 2; i++){
		cin >> a;
		if(mp[a] == 0){
			cout << a << " ";
			mp[a]++;
		}
	}
	cout << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}