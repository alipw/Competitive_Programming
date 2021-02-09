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
	int n,k,tmp;
	cin >> n >> k;
	vector<int> a(n);
	umap<int,int> mp;
	rep(i,n){
		cin >> tmp;
		mp[tmp]++;
		a[i] = tmp;
	}
	bool ok = false;
	rep(i,n){
		if(mp[k - a[i]] != 0){
			ok = true;
			cout << "YES" << endl;
			break;
		}
	}
	if(!ok) cout << "NO";

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
