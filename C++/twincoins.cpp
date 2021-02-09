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
	int n,total = 0, sum = 0;
	cin >> n;
	int a[n];
	rep(i,n){
		cin >> a[i];
		total += a[i];
	}
	sort(a,a + n);
	int i = n - 1,counter = 0;
	while(sum <= total){
		counter++;
		sum += a[i];
		total -= a[i];
		i--;
	}
	cout << counter;

}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
