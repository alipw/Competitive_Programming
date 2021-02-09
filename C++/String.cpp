#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ar array


void solve(){
	string str;
	cin >> str;
	char ans [(str.length()/2)+1];
	if(str.length() <= 2){
		cout << str << "\n";
	}
	else{
		for(int i = 0,s = 2,j = 0; i < str.length(); i++){
			if(i != s){
				cout << str[i];
				j++;
			}
			else if(i == s){
				s+=2;
			}
		}
		cout << "\n";
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