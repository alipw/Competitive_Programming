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
#define dbg(a) cout << "[" << #a << " : "; DEBUG_PRINTER((a)); cout << "]\n" ;
#define debug(...) dbg(__VA_ARGS__)
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
	cout << endl;
	for(auto& it : var) cout << it.first << "->" << it.second << endl;
}
//end of template


int main(){
	umap<string,int> mp;
	mp["halo"] = 1;
	mp["halo1"] = 2;
	mp["halo2"] = 3;
	mp["halo3"] = 4;
	debug(mp);
}