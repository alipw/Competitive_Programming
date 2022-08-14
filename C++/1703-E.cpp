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
	for (int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
void DEBUG_PRINTER(vector<pair<T, S>> var) {
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

/*

|-------------------------------|
|-2,2  | -1,2  |	1,2	 |	2,2 |
|-------------------------------|
|-2,1  | -1,1  |	1,1	 |	2,1 |
|-------------------------------|
|-2,-1 | -1,-1 |	1,-1 |	2,-1|
|-------------------------------|
|-2,-2 | -1,-2 |	1,-2 |	2,-2|
|-------------------------------|

*/


void solve() {
	int n; cin >> n;

	map<pair<int,int>, char> mp;

	if(n % 2 == 0){
		int ans = 0;
		for(int i = n / 2; i >= (n * -1) / 2; i--){
			if(i == 0) continue;

     		int k = 0; string s; cin >> s;
			for(int j = n * -1 / 2; j <= n / 2; j++){
				if(j == 0) continue;

        mp[make_pair(i, j)] = s[k]; k++;
			}
		}
		for(int i = n / 2; i >= 1; i--){
			for(int j = n * -1 / 2; j <= -1; j++){
				int cnt = 0;
				pair<int,int> coor = make_pair(i,j);
				pair<int,int> tmpcoor;
				for(int k = 0; k < 4; k++){
					cnt += mp[coor] == '1';
					tmpcoor = coor;

					coor.first = tmpcoor.second;
					coor.second = tmpcoor.first;
					coor.second = coor.second * -1;
				}

				if(cnt == 2) ans += 2;
				else if(cnt ==  3 || cnt == 1) ans += 1;
			}
		}
		cout << ans;
	}else{
		int ans = 0;
		for(int i = n / 2; i >= (n * -1) / 2; i--){

      int k = 0; string s; cin >> s;
			for(int j = n * -1 / 2; j <= n / 2; j++){

        mp[make_pair(i, j)] = s[k]; k++;
			}
		}
		for(int i = n / 2; i >= 1; i--){
			for(int j = n * - 1 / 2; j <= 0; j++){
				int cnt = 0;
				pair<int,int> coor = make_pair(i,j);
				pair<int,int> tmpcoor;
				for(int k = 0; k < 4; k++){
					cnt += mp[coor] == '1';
					tmpcoor = coor;

					coor.first = tmpcoor.second;
					coor.second = tmpcoor.first;
					coor.second = coor.second * -1;
				}

				if(cnt == 2) ans += 2;
				else if(cnt ==  3 || cnt == 1) ans += 1;
			}
		}
		cout << ans;
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TEST_CASE;
	cin >> TEST_CASE;
	while (TEST_CASE--) {
		solve();
		cout << endl;
	}
	return 0;
}
