#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template


void solve(){
	string str;
	getline(cin,str);
	map<char,int> mp;
	for(int i = 0; i < str.size(); i++) mp[str[i]]++;
	for(map<char,int>::iterator i = mp.begin(); i != mp.end(); ++i)
		cout << i->first << " : " << i->second << endl;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
