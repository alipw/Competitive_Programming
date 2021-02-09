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
	int n,gap;
	cin >> n;
	bool ok = true;
	int a[n],b[n];
	rep(i,n) cin >> a[i];
	rep(i,n) cin >> b[i];
	int i = 0, j = n - 1;
	while(a[i] == b[i] && i < j	){
		i++;
	}
	gap = a[i] - b[i];
	if(gap > 0) ok = false;
	while(a[j] == b[j] && j > i){
		j--;
	}
	if(a[j] - b[j] != gap) ok = false;
	else{
		while(i < j){
			if(a[i] - b[i] != gap) ok = false;
			i++;
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

