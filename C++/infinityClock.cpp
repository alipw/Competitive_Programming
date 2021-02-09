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
	int n,maxx = INT_MIN;
	ll k;
	cin >> n;
	cin >> k;
	vector<int> a(n);
	rep(i,n) {
		cin >> a[i];
		maxx = max(a[i],maxx);
	}
	vector<int> arr1,arr2;
	int max2 = INT_MIN;
	rep(i,n){
		a[i] = maxx - a[i];
		arr1.push_back(a[i]);
		max2 = max(a[i],max2);
	}
	rep(i,n){
		a[i] = max2 - a[i];
		arr2.push_back(a[i]);
	}
	if(k % 2){
		rep(i,n) cout << arr1[i] << " ";
	}else{
		rep(i,n) cout << arr2[i] << " ";
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