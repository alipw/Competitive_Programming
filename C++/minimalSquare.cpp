#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long a , b;
	cin >> a >> b;
	//
	int i = 1;
	while(true){
		if(pow(i,2) >= a * b *  2 && i >= min(a,b) + min(a,b) && i >= max(a,b)){
			break;
		}else{
			i++;
		}
	}
	cout << i * i << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}