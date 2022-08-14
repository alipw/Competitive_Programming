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
/* 
	so everytime i can move to any dust to the last 
	position, i should do it.

	why?, because instead of moving it somewhere else
	which eventually have to be moved to the last position.
	we can just skip the hassle and just completely move them
	to their final destination.

	but i can only do that if i have carved the "pathway" for it 
	so i must first create the pathway to do it.

	is there any case where creating pathway is slower than 
	just moving them to some element that is not the last element?

	i don't think so, because in order to move them to the end, 
	i have to eventually carve the pathway. 

	in one operation, i can either;
	1. move some dust to the left
	2. move some dust to the left AND pushes them to the end of the array.

	the second option is always preferable to do.

	FINAL MODEL:
	let s be the count all the zeroes between the first non-zero element
	to n - 1, and let K be the total of the array except the last element

	the answer would be s + K.
*/

void solve() {
	ll n, ans = 0; cin >> n;
	vector<ll> a(n);
	bool is_nonzero = false;

	for(int i = 0; i < n; i++) {
		ll& x = a[i]; cin >> x;

		if(x > 0) is_nonzero = true;

		if(i < n - 1 and is_nonzero){
			if(x == 0) ans++;
			else ans += x;
		}
	}

	cout << ans;
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
