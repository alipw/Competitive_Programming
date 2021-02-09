#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map

void solve(){
	int n,ans = 0;
	cin >> n;
	umap<int,int> mp;
	string str;
	cin >> str;
	for(int i = 0; i < n; i++){
		if(str[i] == ')'){
			bool ada = false;
			for(int j = i - 1; j >= 0; j--){
				if(str[j] == '(' && mp[j] == 0){
					mp[j]++;
					ada = true;
					break;
				}
			}
			if(!ada)
				ans++;
		}else if(str[i] == '('){
			bool ada = false;
			for(int j = i + 1; j < n; j++){
				if(str[j] == ')' && mp[j] == 0){
					mp[j]++;
					ada = true;
					break;
				}
			}
			if(!ada){
				ans++;
			}
		}
	}
	cout << ans/2;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}