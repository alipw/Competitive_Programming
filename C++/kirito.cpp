#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)

void solve(){
	int n,s = 0;
	cin >> s >> n;
	int x[n],y[n];
	vector<pair<int,int>> vect; 
	for(int i = 0; i < n; i++){
		cin >> x[i] >> y[i];
		vect.push_back(make_pair(x[i],y[i]));
	}
	sort(vect.begin(), vect.end());
	bool succes = true;
	for(int i = 0;i < n; i++){
		if(s <= vect[i].first){
			succes = false;
			cout << "NO\n";
			break;
		}else{
			s += vect[i].second;
		}
	}
	if(succes){
		cout << "YES\n";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
