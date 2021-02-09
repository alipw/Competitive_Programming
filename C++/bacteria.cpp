#include <bits/stdc++.h>
using namespace std;
#define ll long long int;

void solve(){
	int n, ans = 0;;
	cin >> n;
	string binary = bitset<32>(n).to_string();
	for(int i = 0; i < binary.length(); i++){
		if(binary[i] == '1'){
			ans++;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}