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
	int n,ans = 0;
	int counts[100];
	cin >> n;
	int a[n];
	rep(i,n) cin >> a[i];
	for(int w = 2; w <= 100; w++){
		memset(counts,0,sizeof(counts));
		int pairs = 0;
		for(int i = 0; i < n; i++){
			if(w > a[i] && counts[w - a[i]] != 0){
				counts[w - a[i]]--;
				pairs++;
			}else{
				counts[a[i]]++;
			}
		}
		ans = max(ans,pairs);
	}
	cout << ans;
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
	return 0;
}
