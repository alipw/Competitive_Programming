#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template


void solve(){
	int n;
	cin >> n;
	umap<int,int> mp;
	vector<int> a;
	vector<int> b;
	for(int i = 0; i < n; i++){
		int tmp;
		cin >> tmp;
		if(mp[tmp] == 0){
			mp[tmp]++;
			a.push_back(tmp);
		}else{
			mp[tmp]++;
			b.push_back(tmp);
		}
		if(mp[tmp] > 2){
			cout << "NO";
			return;
		}
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	cout << "YES" << endl;
	cout << a.size() << endl;
	for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
	cout << endl << b.size() << endl;
	for(int i = b.size() - 1; i >= 0; i--) cout << b[i] << " ";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}