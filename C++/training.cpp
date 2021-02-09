#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}

void solve(){
	int n, k = 1, ans = 0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	sort(a,a+n);
	for(int i = 0; i < n; i++){
		if(a[i] >= k){
			k++;
			ans++;
		}
	}
	cout << ans;

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}