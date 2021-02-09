#include <bits/stdc++.h>
using namespace std;

void solve(){
	int data[3];
	int n, maxx = 0;
	for(int i = 0; i < 3; i++){
		cin >> data[i];
	}
	cin >> n;
	sort(data,data+3);
	int needed = (data[2] - data[1]) + (data[2] - data[0]);
	n -= needed;
	if(n >= 0){
		if(n % 3 == 0){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}else{
		cout << "NO\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}