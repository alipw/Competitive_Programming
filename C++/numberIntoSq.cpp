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
//end of template


void solve(){
	ull n, largest_exponent = 0, current_exponent = 0, largest_number = 0, total = 1;
	vector<ull> ans;
	cin >> n;
	while(n % 2 == 0){
		n /= 2;
		ans.push_back(2);
		largest_exponent++;
	}
	largest_number = 2;
	for(int i = 3; i <= sqrt(n); i += 2){ 
		while(n % i == 0){
			ans.push_back(i);
			n /= i;
			current_exponent++;
		}
		if(current_exponent > largest_exponent){
			largest_number = i;
			largest_exponent = current_exponent;
		}
		current_exponent = 0;
	}
	ans.push_back(n);
	if(largest_exponent == 0){
		cout << 1 << endl << n;
		return;
	}
	cout << largest_exponent << endl;
	for(int i = 0; i < largest_exponent - 1; i++) cout << largest_number << " ";
	for(int i = 0; i < ans.size(); i++){
		if(ans[i] != largest_number){
			total *= ans[i]; 
		}
	}
	cout << (total * largest_number);
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