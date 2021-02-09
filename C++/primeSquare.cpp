#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin() a.end()
#define rall(a) a.rbegin() a.rend()
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
	cout << endl; for(auto& it : var) cout << it.first << "->" << it.second << endl;
}
//end of template

const int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271};

umap<int,int> mp;

void solve(){
	int n;
	cin >> n;
	int a = 0; 
	while(mp[primes[a] + 1 - n] || primes[a] < n){
		a++;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j == i){
				cout << primes[a] + 1 - n << " ";
			}else{
				cout << 1 << " ";
			}
		}
		cout << endl;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	for(auto i : primes){
		mp[i] = 1;
	}
	int TEST_CASE;
	cin >> TEST_CASE;
	while(TEST_CASE--){
		solve();
		cout << endl;
	}
	return 0;
}