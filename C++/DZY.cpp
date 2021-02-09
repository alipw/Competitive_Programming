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
	string s;
	cin >> s;
	int n;
	cin >> n;
	ull ans = 0;
	int tmp = 0,maxx = 0;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	umap<char,int> mp;
	for(int i = 0; i < 26; i++){
		cin >> tmp;
		maxx = max(tmp,maxx);
		mp[alphabet[i]] = tmp;
	}
	int i;
	for(i = 0; i < s.length(); i++){
		ans += mp[s[i]] * (i + 1);
	}
	i+=1;
	while(n--){
		ans += maxx * i;
		i++;
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}