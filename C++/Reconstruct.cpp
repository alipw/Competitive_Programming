#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
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
//end of template


void solve(){
	string a;
	cin >> a;
	int x, n = a.size();
	cin >> x;
	vector<char> s(n);
	fill(s.begin(), s.end(),'1');
	for(int i = 0; i < n; i++){
		if(a[i] == '0'){
			if(i + x < n) s[i + x] = '0';
			if(i - x >= 0) s[i - x] = '0'; 
		}
	}
	for(int i = 0; i < n; i++){
		debug(s);
		if(a[i] == '1'){
			//i need at least i + x || i - x == '1'
			bool can = false;
			can = (i + x < n && s[i + x] == '1');
			can = can || (i - x >= 0 && s[i - x] == '1');
			can = can || ((i - x >= 0 && i + x < n) && (s[i + x] == '1' || s[i - x] == '1'));
			if(!can){
				cout << -1;
				return;
			}
		}
	}
	rep(i,n) cout << s[i];
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	while(TEST_CASE--){
		solve();
		cout << endl;
	}
	return 0;
}