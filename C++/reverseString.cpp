#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	reverse(a.begin(),a.end());
	if(a == b)
		cout << "YES";
	else
		cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}