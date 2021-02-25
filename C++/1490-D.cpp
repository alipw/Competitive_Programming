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
template<typename T,typename S>
void DEBUG_PRINTER(umap<T,S> var){
	cout << endl; for(auto& it : var) cout << it.first << " -> " << it.second << endl;
}
template<typename T,typename S>
void DEBUG_PRINTER(map<T,S> var){
	cout << endl; for(auto& it : var) cout << it.first << " -> " << it.second << endl;
}
//end of template

umap<int,int> mp;

int maxElement(vector<int> arr){
	int ans = INT_MIN;
	for(int i : arr){
		ans = max(ans,i);
	}
	return ans;
}


void dfs(vector<int> arr, int j){
	if(arr.size() != 0) mp[maxElement(arr)] = j;
	if(arr.size() <= 1){
		return;
	}
	vector<int> arrleft;
	vector<int> arrRight;
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] == maxElement(arr)){
			for(int k = 0; k < i; k++){
				arrleft.push_back(arr[k]);
			}
			for(int k = i + 1; k < arr.size(); k++){
				arrRight.push_back(arr[k]);
			}
			i = arr.size();
		}
	}
	j++;
	dfs(arrleft, j);
	dfs(arrRight, j);
}

void solve(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	dfs(a,0);
	// debug(mp);
	for(auto i : a){
		cout << mp[i] << " ";
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

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	solve();
// 	return 0;
// }

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int TEST_CASE:
// 	cin >> TEST_CASE;
// 	for(int i = 1; i <= TEST_CASE; i++){
// 		cout << "CASE #" << i << endl;
// 		solve();
// 		cout << endl;
// 	}
// 	return 0;
// }