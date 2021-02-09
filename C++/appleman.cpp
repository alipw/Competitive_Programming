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

char a[100][100];

void solve(){
	int n,ans = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++) cin >> a[i][j];
	}
	bool ok = true;
	rep(i,n){
		rep(j,n - 1){
			ans = 0;
			if(a[i][j + 1] == 'o' && j + 1 != n)
				ans++;
			if(a[i][j - 1] == 'o' && j - 1 != -1)
				ans++;
			if(a[i + 1][j] == 'o' && i + 1 != n)
				ans++;
			if(a[i - 1][j] == 'o' && i - 1 != -1)
				ans++;	
			if(ans % 2){
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
	solve();
}