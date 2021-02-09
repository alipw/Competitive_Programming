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

vector<int> NP;

void solve(){
	int a;
	cin >> a;
	if(a < 31){
		cout << "NO";
	}else{
		int sisa = a - 30;
		if(sisa == 6 || sisa == 10 || sisa == 14){
			cout << "YES" << endl;
			cout << "6 10 15 " << a - 31; 
		}else{
			cout << "YES" << endl;
			cout << "6 10 14 " << a - 30;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << endl;
	}
}
