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
	int cups = 0,medals = 0;
	rep(i,3){
		int tmp;
		cin >> tmp;
		cups += tmp;
	}
	rep(i,3){
		int tmp;
		cin >> tmp;
		medals += tmp;
	}
	int n;
	cin >> n;
	while(cups > 0){
		cups -= 5;
		n--;
	}
	while(medals > 0){
		medals -= 10;
		n--;
	}
	if(n >= 0){
		cout << "YES";
	}else{
		cout << "NO";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
