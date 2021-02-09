#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long long int n, a = 0 , b = 0;
	cin >> n;
	long long int data[n];
	for(int i = 0;i < n; i++){
		data[i] = pow(2,i+1);
		cout << data[i] << " ";
	}
	cout << "\nFirst Lane : ";
	for(int i = 0, s = n-1; i < n/4; i++, s--){
		cout << data[i] << " + " << data[s] << " ";
		a += data[i] + data[s];
	}
	cout << " = " << a;
	cout << "\nSecond Lane : ";
	for(int i = n/4, s = n - 1 - n /4; i < n/2; i++, s--){
		cout << data[i] << " + " << data[s] << " ";
		b += data[i] + data[s];
	}
	cout << " = " << b;
	cout << "\n\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}