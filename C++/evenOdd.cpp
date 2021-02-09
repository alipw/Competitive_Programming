#include <bits\stdc++.h>
#define ar array
using namespace std;

void solve(){
	int a,b;
	cin >> a >> b;
	int totalmove;
	if(a % 2 == 0 && b % 2 == 0 && a < b)//even even less 
		totalmove = 2;
	else if(a % 2 == 0 && b % 2 == 0 && a > b)//even even more
		totalmove = 1;
	else if(a % 2 == 0 && b % 2 == 1 && a > b)//even odd more
		totalmove = 2;
	else if(a % 2 == 1 && b % 2 == 0 && a > b)//odd even more
		totalmove = 2;
	else if(a % 2 == 1 && b % 2 == 0 && a < b)//odd even less
		totalmove = 1;
	else if(a % 2 == 0 && b % 2 == 1 && a < b)//even odd less
		totalmove = 1;
	else if(a % 2 == 1 && b % 2 == 1 && a > b)//odd odd more
		totalmove = 1;
	else if(a % 2 == 1 && b % 2 == 1 && a < b)//odd odd less
		totalmove = 2;
	else if(a == b)//a = b
		totalmove = 0;
	cout << totalmove << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int t;
	cin >> t;
	cout << "\n";
	while(t--){
		solve();
	}
}