#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	char data[n][5];
	for(int i = 0;i < n; i++){
		for(int j = 0;j < 5; j++){
			cin >> data[i][j];
		}
	}
	string is_possible = "NO";
	for(int i = 0;i < n; i++){
		for(int j = 0;j < 4; j+=3){
			if(data[i][j] == 'O' && data[i][j+1] == 'O'){
				is_possible = "YES";
				data[i][j] = '+';
				data[i][j+1] = '+';
				break;
			}
		}
		if(is_possible == "YES")
			break;
	}
	if(is_possible == "YES"){
		cout << is_possible << "\n";
		for(int i = 0;i < n; i++){
			for(int j = 0;j < 5; j++){
				cout << data[i][j];
			}
			cout << "\n";
		}
	}else{
		cout << is_possible << "\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}