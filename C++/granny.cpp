#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	int total = n;
	for(int i = n - 1; i >= 0; i--){
		if(a[i] > total){
			total--;
		}else{
			break;
		}
	}
	cout << total + 1;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}