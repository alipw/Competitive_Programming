#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long temp,ans = 0;
	while(n--){
		cin >> temp;
		ans += temp;
	}
	cout << ans;
}