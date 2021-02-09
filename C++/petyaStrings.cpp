#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ar array

char alphabets[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int stringToNum(char a){
	int value;
	for(int i = 0; i < 26; i++){
		if(a == alphabets[i]){
			value = i;
			break;
		}
	}
	return value;
}

void solve(){
	string data,data2;
	int a,b;
	cin >> data >> data2;
	int valA = 0,valB = 0;
	bool print = true;
	transform(data.begin(), data.end(), data.begin(), ::tolower);
	transform(data2.begin(), data2.end(), data2.begin(), ::tolower); 
	for(int i = 0; i < data.length(); i++){
		valA += stringToNum(data.at(i));
		valB += stringToNum(data2.at(i));

		if(valA > valB){
			cout << "1";
			print = false;
			break;
		}
		else if(valA < valB){
			cout << "-1";
			print = false;
			break;
		}
			
	}
	if(print)
		cout << "0";

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	solve();
}