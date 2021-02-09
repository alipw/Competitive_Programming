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
template<typename T,typename S>
void DEBUG_PRINTER(pair<T,S> var){
	cout << var.first << " -> " << var.second; 
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


map<pair<int,int>,int> mp;

void start(int n,pair<int,int> pos, int moves, string lastDirection){
	if(moves >= n){
		mp[pos]++;
		return;
	}
	else if(pos.first == 0 && pos.second == 0){
		moves++;
		start(n, make_pair(0,1), moves, "horizontal");
		start(n, make_pair(0,-1), moves, "horizontal");
		start(n, make_pair(1,0), moves, "vertical");
		start(n, make_pair(-1,0), moves, "vertical");
	}
	else{
		moves++;
		if(lastDirection == "horizontal"){
			start(n,make_pair(pos.first + 1, pos.second), moves,"vertical");
			start(n,make_pair(pos.first - 1, pos.second), moves,"vertical");
		}
		else{
			start(n,make_pair(pos.first, pos.second + 1), moves,"horizontal");
			start(n,make_pair(pos.first, pos.second - 1), moves,"horizontal");	
		}
	}
}

void solve(){
	mp.clear();
	ull n,ans = 0;
	cin >> n;
	start(n,make_pair(0,0),0, "zero");
	// cout << "================" << endl;
	// for(auto it : mp){
	// 	cout << "[" << it.first.first << " ," << it.first.second << "]  -> " << it.second << endl;
	// }
	vector<int> x;
	vector<int> y;
	for(auto it : mp){
		x.push_back(it.first.first);
	}
	for(auto it : mp){
		y.push_back(it.first.second);
	}
	cout << "x" << n << " = c(";
	for(int i = 0; i < x.size(); ++i) cout << x[i] << (i == x.size() - 1 ? "" : ",");
	cout << ")" << endl;
	cout << "y" << n << " = c(";
	for(int i = 0; i < y.size(); ++i) cout << y[i] << (i == y.size() - 1 ? "" : ",");
	cout << ")" << endl;
	cout << "plot(x" << n << ",y" << n << ",main=\"SIZE :  "<< mp.size() << " \")" << endl;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
		cout << endl;
	}
	return 0;
}

