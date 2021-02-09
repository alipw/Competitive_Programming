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
	int n;
	cin >> n;
	vector<string> a(n);
	rep(i,n){
		cin >> a[i];
	}
	umap<char,int> mp;
	for(auto s : a){
		for(int i = 0; i < s.length(); i++){
			mp[s[i]]++;
		}
	}
	for(umap<char,int>::iterator i = mp.begin(); i != mp.end(); ++i){
		if(i->second % n != 0){
			cout << "NO";
			return;
		}
	}
	cout << "YES";

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
	return 0;
}