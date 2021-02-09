#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	cin >> n;
	if(n % 4 == 0){
		cout << "YES\n";
		int k = 0;
		for(int i = 0, s = 2;i < n/2; i++,s += 2){
			cout << s << " ";
			k+=s;
		}
		int f = 0;
		for(int i = 0,s = 1; i < (n - 1) /2; i++, s+=2){
			cout << s << " ";
			f += s;
		}
		cout << k - f;
		cout << "\n";
	}else{
		cout << "NO\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}