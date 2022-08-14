#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define absolute(a) sqrt((a) * (a))
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) {cout << "[" << #a << " : "; DEBUG_PRINTER((a)); cout << "]\n" ;}
template <typename T>
void DEBUG_PRINTER(T var) {
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var) {
	for (int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(pair<T,S> var){
	cout << var.first << ", " << var.second;
}
template <typename T, typename S>
void DEBUG_PRINTER(vector<pair<T, S>> var) {
	for (int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
}
template<typename T, typename S>
void DEBUG_PRINTER(umap<T, S> var) {
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(map<T, S> var) {
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", "); 
}


//end of template


vector<int> solve(int arr[], int n, long long s)
{
	unordered_map<long long, int> mp;

	mp[-arr[0]] = 2;
	mp[0] = 1;
	for(int i = 0; i < n; i++) {
		if(i != 0){
			arr[i] = arr[i - 1] + arr[i];
			mp[-arr[i]] = i + 2;	
		}

		if(mp[s - arr[i]]){
		    vector<int> ans(2);
			ans[0] = mp[s - arr[i]];
			ans[1] = i + 1;
			return ans;
		} 
	}
	vector<int> no_ans(1); 
	no_ans[0] = -1;
	return no_ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n; ll s; cin >> n >> s;
	int arr[n];
	for(int &x : arr) cin >> x;
	debug(solve(arr, n ,s));
	cout << endl;
	return 0;
}

