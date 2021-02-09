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
	int n;
	cin >> n;
	string a;
	cin >> a;
	bool ada = false;
	int index1,index2;
	for(int i= 0; i < n; i++){
		if(a[i] == '1'){
			index1 = i;
			ada = true;
			break;
		}
	}
	for(int i = n - 1; i >= 0; i--){
		if(a[i] == '1'){
			index2 = i;
			break;
		}
	}
	int ans = max(n - index1,index2 + 1);
	if(ada) cout << ans * 2;
	else cout << n;
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
