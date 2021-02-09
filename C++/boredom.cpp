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
	int n,ans = 0,tmp = 0,val1 = 0,val2 = 0;
	cin >> n;
	umap<int,int> mp;
	vector<pair<int,int> a;
	rep(i,n){
		cin >> tmp;
		mp[tmp] += tmp;
	}
	for(umap<int,int>::iterator it = mp.begin(); it != mp.end(); ++it){
		a.push_back(make_pair(it->second,it->first));
	}
	umap<int,int> ignore;
	sort(a.begin(), a.end());
	for(int j = a.size() - 1; j >= 0; j--){
		if(ignore[a[j].second] == 0){
			ignore[a[j].second - 1] = 1;
			ignore[a[j].second + 1] = 1;
			val1 += a[j].first;
		}
	}
	ignore.clear();
	for(int j = a.size() - 2; j >= 0; j--){
		if(ignore[a[j].second] == 0){
			ignore[a[j].second - 1] = 1;
			ignore[a[j].second + 1] = 1;
			val2 += a[j].first;
		}
	}
	cout << max(val1,val2);
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}