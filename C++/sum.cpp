#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string str;
	getline(cin,str);
	int data[str.length()/2];
	int j = 0;
	for(int i = 0; i < str.length(); i+=2){
		data[j] = str[i] - '0';
		j++;
	}
	sort(data,data+j);
	for(int i = 0; i < j; i++){
		cout << data[i];
		if(i < j-1)
			cout << "+";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}