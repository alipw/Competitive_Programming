#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}

void solve(){
	string vowels = "aiueo";
	umap<char,int> mp;
	for(int i = 0; i < 5; i++) mp[vowels[i]] = true;
	string s,t;
	cin >> s >> t;
	bool ok = true;
	for(int i = 0; i < max(s.length(), t.length()); i++){
		if(mp[s[i]] != mp[t[i]]){
			ok = false;
			break;
		}
	}
	if(ok && s.length() == t.length()) cout << "YES";
	else cout << "NO";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
