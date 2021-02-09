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
	umap<int,int> mp;
	rep(i,n){
		int tmp;
		cin >> tmp;
		mp[tmp]++;
	}
	int ans = 0;
	rep(j,2){
		for(int i = 0; i <= 100; i++){
			if(mp[i] == 0){
				ans += (i - 1 == -1 ? 0 : i);
				break;
			}
			mp[i]--;
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