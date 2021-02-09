#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define pb(a) push_back(a)
#define rep(i,n) for(int i = 0; i < (n); ++i)
//end of template

void solve(){
	int n,maxx = 0;
	cin >> n;
	vector<int> a(n);
	rep(i,n){
		cin >> a[i];
		maxx = max(a[i],maxx);
	}
	string prv = "a";
	rep(i,maxx - 1) prv.push_back('a');
	cout << prv << endl;
	char run = 'b';
	rep(i,n){
		if(a[i] != 0){
			for(int j = 0; j < a[i]; j++){
				cout << prv[j];
			}
			for(int j = a[i]; j < maxx; j++){
				if(prv[j] == run) {
					if(run == 'b') run = 'a';
					else run = 'b';
				}
				prv[j] = run;
				cout << run;
			}
		}else{
			if(prv[0] == run){
				if(run == 'b') run = 'a';
				else run = 'b';
			}
			rep(j,maxx + 1) prv[j] = run;
			rep(j,maxx + 1) cout << run;
		}
		cout << endl;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int TT;
	cin >> TT;
	while(TT--){
		solve();
	}
}

