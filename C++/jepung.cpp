#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unsigned long long int a ,b;
	cin >> a >> b;
	unsigned long long int ans1 = a/b - (b-1);
	unsigned long long int ans2 = a/b + (b-1);
	if(ans1 % 2 == 0 or ans2 % 2 == 0){
		cout << "Tidak bisa Nee-chan!\n";
	}else{
		cout << ans1 << " " << ans2 << "\n";
	}
	
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}