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
//end of template

void solve(){
	int n,tmp;
	cin >> n;
	int counter = 0;
	umap<int,int> mp;
	int a[n * 2];
	rep(i,n * 2){
		cin >> tmp;
		a[i] = tmp;
		if(mp[tmp] == 0) {
			mp[tmp]++;
			counter++;
		}
	}
	sort(a,a + n *2);
	if (counter > 1) printAll(a,n * 2);
	else cout << -1;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
