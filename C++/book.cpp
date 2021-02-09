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

int a[7];

void solve(){
	int n;
	cin >> n;
	rep(i,7) cin >> a[i];
	int i = 0;
	while(n > 0){
		if(i == 7) i = 0;
		n-=a[i];
		i++;
	}
	cout << i;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}