#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	string str1, str2, str3, str;
	getline(cin,str1);
	getline(cin,str2);
	getline(cin,str3);
	str = "" + str1 + str2;
	bool match = true;
	if(str.length() != str3.length()){
		match = false;
	}else{
		unordered_map<char,int> mp1;
		unordered_map<char,int> mp2;
		for(int i = 0;i < str.length(); i++){
			mp1[str[i]]++;
			mp2[str3[i]]++;
		}
		for(int i = 0; i < str.length(); i++){
			if(mp1[str[i]] != mp2[str[i]]){
				match = false;
				break;
			}
		}
	}
	if(match)
		cout << "YES";
	else
		cout << "NO";


}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}