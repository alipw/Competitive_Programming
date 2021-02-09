#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
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
	string s1,s2;
	cin >> s1 >> s2;
	umap<char,int> mp;
	umap<char,int> val;
	rep(i,s1.size()){
		mp[s1[i]]++;
	}
	if(s2.size() < s1.size()){
		cout << "NO";
		return;
	}
	for(int i = 0; i <= s2.size() - s1.size(); i++){
		val.clear();
		for(int j = i; j < i + s1.size(); j++){
			val[s2[j]]++;
		}
		if(val == mp){
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << endl;
	}
	return 0;
}
