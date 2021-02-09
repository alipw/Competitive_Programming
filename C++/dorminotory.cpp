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
	ll n,tmp,m;
	cin >> n >> m;
	ll a[n];
	ll letter[m];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < m; i++){
		cin >> letter[i];
	}
	ll sum = 0;
	ll idx = 0;
	for(int i = 0; i < m; i++){
		while(sum + a[idx] < letter[i]){
			sum += a[idx];
			idx++;
		}
		std::cout << idx + 1 << " " << letter[i] - sum << endl;
	}


}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}