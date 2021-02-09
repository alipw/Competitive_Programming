#include <bits/stdc++.h>
#include <math.h>
using namespace std;
#define ar array

void solve(){
	double n , x, y , z;
	cin >> n >> x >> y >>z;
	double c = sqrt(pow(x,2) + pow(y,2));
	c *= ((n-1) * 2);
	c += x;
	if(z > c){
		cout << "Bisa";
	}else{
		cout << "Tidak Bisa";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}