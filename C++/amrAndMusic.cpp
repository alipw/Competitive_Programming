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
	vpp a;
	int n,k;
	vector<int> ans;
	cin >> n >> k;
	int tmp;
	rep(i,n){
		cin >> tmp;
		a.push_back(make_pair(tmp,i + 1));
	}
	sort(a.begin(), a.end());
	rep(i,n){
		if(k < a[i].first)
			break;
		ans.push_back(a[i].second);
		k -= a[i].first;
	}
	cout << ans.size() << endl;
	printAll(ans);
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}