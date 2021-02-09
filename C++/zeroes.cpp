#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	ll a,b;
	cin >> a >> b;
	ll val = a + b;
	bool ok = true;
	string sa = to_string(a),sb = to_string(b), vb = to_string(val);
	for(int j = 0; j < sa.length(); j++){
		if(sa[j] == '0'){
			sa.erase(sa.begin() + j);
			j--;
		}
	}
	for(int j = 0; j < sb.length(); j++){
		if(sb[j] == '0'){
			sb.erase(sb.begin() + j);
			j--;
		}
	}
	for(int j = 0; j < vb.length(); j++){
		if(vb[j] == '0'){
			vb.erase(vb.begin() + j);
			j--;
		}
	}
	ll na = stoi(sa), nb = stoi(sb);
	ok = na + nb == stoi(vb);
	if(ok) cout << "YES";
	else cout << "NO";

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}