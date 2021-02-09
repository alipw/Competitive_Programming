#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
 
const string prv = "abacaba";
 
int count(string str){
	int ans = 0;
	for(int i = 0; i < (int)str.size(); i++){
		if(str.substr(i,prv.size()) == prv){
			ans++;
		}
	}
	return ans;
}
 
void solve(){
	int n;
	string str;
	cin >> n;
	cin >> str;
	bool ada = false;
	for(int i = 0; i < n - 6; i++){
		bool same = true;
		string ss = str;
		for(int j = 0; j < 7; j++){
			if(ss[i + j] != prv[j] && ss[i + j] != '?'){
				same = false;
				break;
			}
			ss[i + j] = prv[j];
		}
		if(same && count(ss) == 1){
			for(int j = 0; j < n; j++){
				if(ss[j] == '?'){
					ss[j] = 'd';
				}
			}
			ada = true;
			cout << "YES\n";
			cout << ss << "\n";
			break;
		}
	}
	if(!ada)
		cout << "NO\n";
}
 
 
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t,i = 1;
	cin >> t;
	while(t--){
		unsigned int start = clock();
		solve();
		cout << "Time taken in test case #" << i << " : " << clock() - start << "ms" << endl; 
	}
}