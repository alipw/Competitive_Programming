#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,m;
	cin >> n >> m;
	int total = n*m;
	if(total%2 != 0)
		total+=1;
	total = total/2;
	cout << total << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;
	while(t--)
		solve();
}