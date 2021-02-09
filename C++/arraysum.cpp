#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,ans = 0,tmp = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		ans += tmp;
	}
	cout << ans << endl;
}
