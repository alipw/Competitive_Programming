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


ll dp[1000005];

void solve(){
	int n,tmp = 0;
	cin >> n;
	ll cnt[100005];
	memset(cnt,0,sizeof(cnt));
	int maxx = INT_MIN;
	rep(i,n){
		cin >> tmp;	
		maxx = max(tmp,maxx);
		cnt[tmp]++;
	}
	dp[0] = 0;
	dp[1] = cnt[1];
	for(ll i = 2; i <= maxx; ++i){
		dp[i] = max(dp[i - 1], dp[i - 2] + (cnt[i] * i));
	}
	cout << dp[maxx];

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
