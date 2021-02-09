#include <bits/stdc++.h>
#define ar array
using namespace std;

void solve(){
	int n,k,total,n1 = 1,n2,n3,n4;
	cin >> n >> k;
	while(total != n){
		n2 = n1 * k;
		n3 = n2 * k;
		n4 = n3 * k;
		total = n1 + n2 + n3 + n4;
		if(total == n)
			break;
		else
			n1++;
	}
	cout << n1 << " " << n2 << " " << n3 << " " << n4 << "\n";

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