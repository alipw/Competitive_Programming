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
	int n;
	cin >> n;
	int x,y;
	cin >> x >> y;
	for(int i = 1; i <= y - x; i++){
		if((y - x) % i != 0) continue;
		vector<int> cur;
		int pos = y - i;
		cur.push_back(y);
		bool findx = false;
		while(pos >= 1 && cur.size() < n){
			cur.push_back(pos);
			if(pos == x) findx = true;
			pos -= i;
		}
		pos = y + i;
		while(cur.size() < n){
			cur.push_back(pos);
			pos += i;
		}
		if(findx){
			rep(i,n) cout << cur[i] << " ";
			break;
		}

	}
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