#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int grade,limit;
	cin >> grade;
	if(grade < 38){
		cout << grade << "\n";
	}else{
		for(int i = 40; i <= 100; i+=5){
			if(i >= grade){
				limit = i;
				break;
			}
		}
		if(limit  - grade > 2){
			cout << grade << "\n";
		}else{ 
			cout << limit << "\n";
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		solve();
	}
}