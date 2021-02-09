#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map

void solve(){
	ll n,k, tmp = 0;
	cin >> n >> k;
	vector<ll> a;
	bool ok;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		ok = true;
		for(int j = 0; j < a.size(); j++){
			if(a[j] == tmp){
				ok = false;
				break;
			}
		}
		if(ok) a.push_back(tmp);
		if(a.size() > k){
			a.erase(a.begin() + 0);
		}
	}
	ll ans = a.size();
	cout << min(k,ans);
	cout << endl;
	for(int j = a.size() - 1; j >= 0; j--) cout << a[j] << " ";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}