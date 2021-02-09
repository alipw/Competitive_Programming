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
	string str,last = "";
	umap<char,int> badLetters;
	badLetters['g'] = 1;
	badLetters['k'] = 1;
	badLetters['m'] = 1;
	badLetters['q'] = 1;
	badLetters['v'] = 1;
	badLetters['w'] = 1;
	badLetters['x'] = 1;
	badLetters['z'] = 1;
	while(cin){
		cin >> str;	
		if(last.length() < str.length()){
			bool ok = true;
			rep(i,str.length()){
				if(badLetters[str[i]]){
					ok = false;
					break;
				}
			}
			if(ok) last = str;
		}
	}
	cout << last;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}


