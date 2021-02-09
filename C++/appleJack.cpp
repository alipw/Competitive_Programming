#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define absolute(a) sqrt((a) * (a))
#define VAR_NAME(a) #a
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) cout << "\u001b[36;1m[" << #a << " : "; DEBUG_PRINTER((a));  cout << "]\u001b[0m\n";
template <typename T>
void DEBUG_PRINTER(T var){
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var){
	for(int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S>
void DEBUG_PRINTER(vector<pair<T,S>> var){
	for(int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
}
//end of template

int mxN = 10e5 + 5;

void solve(){
	int n,cnt2 = 0,cnt4 = 0;
	cin >> n;
	int cnt[mxN];
	int tmp;
	rep(i,n){
		cin >> tmp;
		cnt2 -= cnt[tmp] / 2;
		cnt4 -= cnt[tmp] / 4;
		cnt[tmp]++;
		cnt2 += cnt[tmp] / 2;
		cnt4 += cnt[tmp] / 4;
	}
	string s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> s >> tmp;
		cnt2 -= cnt[tmp] / 2;
		cnt4 -= cnt[tmp] / 4;
		if(s == "+")cnt[tmp]++;
		else cnt[tmp]--;
		cnt2 += cnt[tmp] / 2;
		cnt4 += cnt[tmp] / 4;
		if(cnt4 >= 1 && cnt2 >= 4){
			cout << "YES\n";
		}else{
			cout << "NO\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}