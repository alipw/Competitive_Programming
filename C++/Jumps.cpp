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



void solve(){
	int choice, point = 0, n; 
	vector<string> moves;
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> choice;
		string move;
		if(choice == 1){
			move = to_string(point) + " + " + to_string(i);
			point += i;
		}else{
			move = to_string(point) + " - 1";
			point -= 1;
		}
		moves.push_back(move);
	}
	debug(moves);
	cout << point;
}

// void solve(){
// 	int n;
// 	cin >> n;
// 	int point = 0, i = 0;
// 	while(point < n){
// 		i++;
// 		debug(point);
// 		point += i;
// 	}
// 	debug(i);
// 	debug(point);
// }

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