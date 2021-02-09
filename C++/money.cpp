#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	unordered_map<string,int> mp;
	int n, ans;
	cin >> n;
	mp["hundreds"] += n / 100;
	n = n % 100;
	mp["twenties"] += n / 20;
	n = n % 20;
	mp["tens"] += n / 10;
	n = n % 10;
	mp["fives"] += n / 5;
	n = n % 5;
	mp["ones"] += n / 1;
	ans = mp["hundreds"] + mp["fifties"] + mp["twenties"] + mp["tens"] + mp["fives"] + mp["ones"];
	cout << ans;

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}