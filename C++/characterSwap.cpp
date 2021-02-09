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
	char ns1,ns2;
	int n,counter = 0;
	cin >> n;
	cin >> s1 >> s2;
	bool ok = true;
	rep(i,n){
		if(s1[i] != s2[i] && counter == 0){
			counter++;
			ns1 = s1[i];
			ns2 = s2[i];
		}else if(s1[i] != s2[i] && counter != 0){
			if(ns1 != s1[i] || ns2 != s2[i]){
				ok = false;
				break;
			}else counter++;
		}
	}
	if(ok && counter == 2) cout << "YES";
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
