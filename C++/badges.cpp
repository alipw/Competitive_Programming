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
	int n,pointer = 0;
	cin >> n;
	int a[n + 1];
	umap<int,int> mp;
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		mp.erase(mp.begin(), mp.end());
		pointer = i;
		while(mp[pointer] < 2){
			mp[pointer]++;
			if(mp[pointer] == 2){
				cout << pointer << " ";
				break;
			}
			pointer = a[pointer];
		}
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}