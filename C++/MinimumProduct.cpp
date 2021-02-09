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
	ll a = 0,b = 0,x = 0,y = 0,n = 0;
	cin >> a >> b >> x >> y >> n;
	ll min_possible_a = max(x,a - n);
	ll min_possible_b = max(y,b - n);
	if(min_possible_a < min_possible_b){
		n -= a - min_possible_a;
		a = min_possible_a;
		if(n != 0){
			min_possible_b = max(y,b - n);
			b = min_possible_b;
		}
	}
	else{
		n -= b - min_possible_b;
		b = min_possible_b;
		if(n != 0){
			min_possible_a = max(x,a - n);
			a = min_possible_a;
		}
	}
	cout << a * b;
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