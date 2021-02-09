#include <bits/stdc++.h>
using namespace std;
#define ar array


void solve(){
	int n;
	cin >> n;
	int bhg = 0;
	string str[n];
	for(int a = 0; a < n; a++){
		 cin >> str[a];
	}
	int i = n-1;
	for(int a = 1; a < n; a++){
		if(str[a] == "BOHONG"){
			bhg++;
		}
	}
	if(bhg%2 == 0){
		cout << str[0];
	}else{
		if(str[0] == "BOHONG")
			cout << "JUJUR";
		else
			cout << "BOHONG";
	}

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}