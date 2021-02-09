#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	string s1,s2;
	cin >> s1 >> s2;
	int h1,h2,m1,m2;
	h1 = stoi(s1.substr(0,2));
	h2 = stoi(s2.substr(0,2));
	m1 = stoi(s1.substr(3,4));
	m2 = stoi(s2.substr(3,4));
	h1 = (h1 * 60) + m1;
	h2 = (h2 * 60) + m2;
	int ans = h2 - h1;
	h1 += ans / 2;
	if(h1 / 60 < 10) cout << 0 << h1 / 60;
	else cout << h1 / 60;
	cout << ":";
	if(h1 % 60 < 10) cout << 0 << h1 % 60;
	else cout << h1 % 60;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
