#include <bits/stdc++.h>
using namespace std;
#define ar array



void solve(){
	int x1,x2,x3,x4,y1,y2,y3,y4;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	cin >> x4 >> y4;

	if(x1 - y1 == 0 && x2 - y2 == 0 && x3 - y3 == 0 && x4 - y4 == 0)
		cout << "GARIS SAMA\n";
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}