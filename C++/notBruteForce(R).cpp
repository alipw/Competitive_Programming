

#include <bits/stdc++.h>
#define ar array
using namespace std;

void solve(){
	long n,k;
	cin >> n >> k;
	long n1 = n/(1+k+k*k+k*k*k);
	cout << n1 << " " << n1*k << " " << n1*k*k << " " << n1*k*k*k << "\n";

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}