#include <bits/stdc++.h>
using namespace std;

void solve(){
	unordered_map<char,long long int> mp;
	long long int x,y,a,b, total = 0;
	cin >> x >> y >> mp['a'] >> mp['b'];
	if(max(x,y) - min(x,y) > max(x,y)){
		cout << mp['a'] * (max(x,y) - min(x,y));
	}else{
		total += (max(x,y) - min(x,y)) * mp['a'];
		if(mp['a'] * min(x,y) * 2 < min(x,y) * mp['b']){
			total += mp['a'] * min(x,y) * 2;
		}else{
			total += mp['b'] * min(x,y);
		}
		cout << total;
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