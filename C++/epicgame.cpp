#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
	int i;
	for(i = min(a,b); i >= 1; i--){
		if(a % i == 0 && b % i == 0)
			break;
	}
	return i;
}

void solve(){
	int n,a,b, i = 0;
	cin >> a >> b >> n;
	while(n > 0){
		++i;
		if(i % 2 != 0){
			n -= gcd(a,n);
		}else{
			n -= gcd(b,n);
		}
	}
	if(i % 2 == 1)
		cout << 0;
	else
		cout << 1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}	