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
	string a,prv = "abc";
	cin >> a;
	bool ok = true;
	rep(i,a.size()){
		if(a[i] == a[i + 1] && a[i] != '?'){
			cout << "-1";
			ok = false;
			break;
		}if(a[i] == '?'){
			rep(j,prv.length()){
				if(i > 0){
					if(a[i - 1] != prv[j] && a[i + 1] != prv[j]) {
						a[i] = prv[j];
						break;
					}
				}else{
					if(a[i + 1] != prv[j]){
						a[i] = prv[j];
						break;
					}
				}
			}
		}
	}
	if(ok) cout << a;
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
