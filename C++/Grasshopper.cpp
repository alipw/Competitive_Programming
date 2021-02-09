#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int tmp = 0, maxx = 0;
	string str;
	cin >> str;
	umap<char,int>vowel;
	vowel['A'] = 1;
	vowel['I'] = 1;
	vowel['U'] = 1;
	vowel['E'] = 1;
	vowel['O'] = 1;
	vowel['Y'] = 1;
	for(int i = 0; i < str.length(); i++){
		tmp = 1;
		while(vowel[str[i]] == 0 && i < str.length()){
			tmp++;
			i++;
		}
		maxx = max(tmp,maxx);
	}
	cout << maxx;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
