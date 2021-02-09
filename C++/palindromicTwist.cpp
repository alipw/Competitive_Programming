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
	string prv = "abcdefghijklmnopqrstuvwxyz",a;
	int n;
	umap<char,int> mp;
	rep(i,26) mp[prv[i]] = i;
	cin >> n;
	cin >> a;
	bool ok = true;
	for(int i = 0, s = n - 1; i < n / 2; i++,s--){
		if(a[i] != a[s]){
			if(max(mp[a[i]],mp[a[s]]) - min(mp[a[i]],mp[a[s]]) > 2 || max(mp[a[i]],mp[a[s]]) - min(mp[a[i]],mp[a[s]]) == 1){
				 ok = false;
				 break;
			}
		}
	}
	if(ok) cout << "YES";
	else cout << "NO";
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
