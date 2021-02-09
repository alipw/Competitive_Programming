#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int s,h,c;
	cin >> s >> h >> c;

	int ans = s/h;
	int b = s/h;
	int terkurang;
	while(b >= c){
		ans+=b/c; // + 5 --- ans ++ b / c = 20 += 5 / 3 = 1 = 21
		terkurang = b;// 15 --- terkurang = 5
		b += b/c; // 15 + 5 == 20 --- b += b/c
		b += terkurang%c;
		b -= terkurang; //b - 15 == 5  ---
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}