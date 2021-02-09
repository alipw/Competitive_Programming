#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	string s;
	int dif = 0;
	cin >> s;
	for(int i = 0; i < s.size() / 2; i++){
		if(s[i] != s[s.size() - 1 - i]){
			dif++;
		}
	}
	if(dif > 1){
		cout << "NO";
	}else{
		if(dif == 0 && s.size() % 2 == 0){
			cout << "NO";
		}else
			cout << "YES";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
