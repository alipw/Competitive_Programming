#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,t = 0;
	cin >> n >> t;
	int data[n];
	for(int i = 1; i < n; i++){
		cin >> data[i];
	}
	bool is_possible = false;
	int i = 0;
	for(i = 1; i < n;){
		if(i == t){
			is_possible = true;
			cout << "YES\n";
			break;
		}
		i += data[i];
	}
	if(i == t && is_possible == false){
		cout << "YES\n";
		is_possible = true;
	}
	if(!is_possible){
		cout << "NO\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}