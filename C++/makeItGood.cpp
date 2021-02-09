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


void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,n) cin >> a[i];
	int asc = 0,desc = 0,ans = 0;
	string status;
	if(n == 2 || n == 1){
		cout << 0;
		return;
	}
	if(a[0] < a[1]){
		status = "desc";
	}else{
		status = "asc";
	}
	//if its decreasing, it means no more ascending, if its ascending, then we can just decrease
	for(int i = 0; i < n - 1; i++){
		if(status == "desc" && a[i] < a[i + 1]){
			for(int j = i; j >= 0; j--){
				if(a[j] != a[i]) break;
				ans = j;
			}
			status = "asc";
		}
		if(status == "asc" && a[i] > a[i + 1]){
			status = "desc";
		}
	}
	cout << ans;
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