#include <bits/stdc++.h>
using namespace std;

const int divider[8] = {4 ,7, 47, 74, 444, 447, 474, 477};

void solve(){
	int n;
	cin >> n;
	bool ok = false;
	for(int i = 0;i < 8; i++){
		if(n % divider[i] == 0){
			cout << "YES";
			ok = true;
			break;
		}
	}
	if(!ok)
		cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}