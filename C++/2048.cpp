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
//end of define

void solve(){
	ll n,sum = 0,tmp = 0;
	cin >> n;
	rep(i,n){
		cin >> tmp;
		if(tmp <= 2048){
			sum+=tmp;
		}
	}
	if(sum >= 2048){
		cout << "YES";
	}else{
		cout << "NO";
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
