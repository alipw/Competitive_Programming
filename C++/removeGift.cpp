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
	ll n,ans = 0;
	cin >> n;
	ll a[n],b[n];
	ll mina = 10e9 + 1,minb = 10e9 + 1;
	rep(i,n){
		cin >> a[i];
		mina = min(mina,a[i]);
	}
	rep(i,n){
		cin >> b[i];
		minb = min(minb,b[i]);
	}
	for(int i = 0; i < n; i++){
		if(a[i] - mina >= 1 && b[i] - minb >= 1){
			ans += min(a[i] - mina,b[i] - minb);
			int k = min(a[i] - mina,b[i] - minb);
			a[i] -= k;
			b[i] -= k;
		}
		if(b[i] != minb){
			ans += b[i] - minb;
			b[i] -= b[i] - minb;
		}
		if(a[i] != mina){
			ans += a[i] - mina;
			a[i] -= a[i] - mina;
		}
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
