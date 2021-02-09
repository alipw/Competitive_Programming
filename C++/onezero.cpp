#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	string s;
	int n;
	cin >> n;
	cin >> s;
	map<char,int> mp;
	rep(i,s.size()){
		mp[s[i]]++;	
	}
	//i need at least 1 n, 1 o, and 1 e to make 'one'
	//i need ar least 1 z, 1 e, 1 r, and 1, o to make 'zero'
	while(mp['n'] != 0){
		cout << 1 << " ";
		mp['n']--;
		mp['o']--;	
		mp['e']--;
	}
	while(mp['z'] != 0){
		cout << 0 << " ";
		mp['z']--;
		mp['e']--;
		mp['r']--;
		mp['o']--;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}