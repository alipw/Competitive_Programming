#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int x1, x2, v1, v2;
	cin >> x1 >> v1 >> x2 >> v2;
	if(x1 == x2){
		cout << "YES" << "\n";
	}
	else{
		bool possible = false;
		if(x1 < x2){
			while(x1 <= x2){
				x1 += v1;
				x2 += v2;
				if(x1 == x2)
					possible = true;
			}
		}else{
			while(x2 <= x1){
				x1 += v1;
				x2 += v2;
				if(x1 == x2)
					possible = true;
			}
		}
		if(possible)
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}