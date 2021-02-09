#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
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
	int n;
	pair<int,int> maxx;
	cin >> n;
	vector<int> a(n);
	rep(i,n){
		cin >> a[i];
		if(maxx.first < a[i]){
			maxx.first = a[i];
			maxx.second = i;
		}
	}
	bool ok = true;
	int i = maxx.second;
	int k = maxx.second - 1;
	int j = maxx.second + 1;
	while(k != -1 || j != n){
		if(a[i] - 1 != a[k] && a[i] - 1 != a[j]){
			ok = false;
			cout << "NO";
			break;
		}else{
			if(a[k] == a[i] - 1){
				i = k;
				k--;
			}else{
				i = j;
				j++;
			}
		}
	}
	if(ok) cout << "YES";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
