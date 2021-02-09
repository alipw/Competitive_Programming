#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, total = 0, tmp;
	cin >> n;
	for(int i = 0;i < n; i++){
		cin >> tmp;
		total += tmp;
	}
	if(total % n != 0)
		cout << total / n + 1;
	else
		cout << total / n;
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