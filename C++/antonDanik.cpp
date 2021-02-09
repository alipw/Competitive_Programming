#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n , ans = 0,a = 0,d = 0;
	string str;
	cin >> n;
	cin >> str;
	for(int i = 0; i < n; i++){
		if(str[i] == 'A')
			a++;
		else if(str[i] == 'D')
			d++;
	}
	if(a == d)
		cout << "Friendship";
	else if(a > d)
		cout << "Anton";
	else if(a < d)
		cout << "Danik";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}