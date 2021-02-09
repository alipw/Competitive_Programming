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
	int n;
	cin >> n;
	string str;
	cin >> str;
	umap<char,int>mp;
	int ans = 0,counter = 0;
	rep(i,n){
		if(mp[str[i]] == 0 && counter < 26){
			mp[str[i]]++;
			counter++;
		}else if(mp[str[i]] != 0){
			ans++;
		}
	}
	if(counter + ans > 26ha){
		cout << -1;
	}else{
		cout << ans;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}

