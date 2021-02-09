#include <bits/stdc++.h>
using namespace std;

void solve(){
	int data[4];
	for(int i = 0;i < 4; i++) cin >> data[i];
	int a =  max(data[0], data[1]);
	int b = max(data[1], data[2]);
	int c = data[2];
	//print berapapun dari dua pilihan itu yang kurang dari a + b
	cout << a << " " << b << " " << c << "\n";

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();
}