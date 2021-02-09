#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long long int n, a = 0 , b = 0;
	cin >> n;
	long long int data[n];
	for(int i = 0;i < n; i++){
		data[i] = pow(2,i+1);
	}
	for(int i = 0 ; i < n / 2 - 1; i++){
		a += data[i];
	}
	a += data[n-1];
	for(int i = n/2 - 1;i < n - 1; i++){
		b += data[i];
	}
	cout << a - b << "\n";

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 0;
	cin >> t;
	while(t--)
		solve();
}