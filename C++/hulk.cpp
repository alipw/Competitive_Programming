#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	//selalu print 'it' di akhir	
	//jika n == 1, maka cukup print ' I hate'
	for(int i = 0; i < n; i++){
		if (i == 0)
			cout << "I hate ";
		else if(i % 2 == 1)
			cout << "that I love ";
		else if(i % 2 == 0)
			cout << "that I hate ";
	}
	cout << " it";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}