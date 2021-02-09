#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string a, b,ans;
	getline(cin,a);
	getline(cin,b);
	for(int i = 0; i < a.length();i++){
		if(a[i] == '1' && b[i] != a[i] || b[i] == '1' && a[i] != b[i]){
			ans.push_back('1');
		}else{
			ans.push_back('0');
		}
	}
	cout << ans << "\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}