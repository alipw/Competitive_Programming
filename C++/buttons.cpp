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
//end of define

void solve(){
	string s;
	cin >> s;
	umap<char,int> mp;
	rep(i,s.size()){
		if(s[i] != s[i + 1]){
			mp[s[i]] = 1;
		}else{
			i++;
		}
	}
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	rep(i,alphabet.size()){
		if(mp[alphabet[i]] == 1){
			cout << alphabet[i];
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << endl;
	}
}
