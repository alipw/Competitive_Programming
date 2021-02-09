#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	double a,b;
	cin >> a >> b;
	double ans = (b * b - a * a) / (2 * a);
	cout << setprecision(20);
	cout << fixed;
	cout << ans;

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
