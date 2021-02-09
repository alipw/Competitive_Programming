#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n ,x,y,z,tx = 0,ty = 0,tz = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x >> y >> z;
		tx += x;
		ty += y;
		tz += z;
	}
	if(tx == 0 && tz == 0 && tx == 0){
		cout << "YES\n";
	}else{
		cout << "NO\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}