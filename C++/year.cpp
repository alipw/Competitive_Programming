#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n;
	cin >> n;
	string str;
	unordered_map<char,int> map;
	n++;
	while(true){
		map.clear();
		str = ""+to_string(n);
		bool distinc = true;
		for(int i = 0; i < 4; i++){
			if(map[str[i]] > 0){
				distinc = false;
				break;
			}else{
				map[str[i]]++;
			}
		}
		if(distinc){
			cout << str;
			break;
		}else{
			n++;
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}