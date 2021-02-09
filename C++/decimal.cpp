#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map


void solve(){
	int n,k;
	cin >> n >> k;
	string str;
	cin >> str;
	int i = 1;
	int j = 0;
	if(str.length() == 1 && k >= 1){
		str[0] = '0';
	}else{
		if(str[0] != '1' && j < k){
			str[0] = '1';
			j++;
		}
		while(i < str.length() && j < k){
			if(str[i] != '0'){
				str[i] = '0';
				i++;
				j++;
			}else{
				i++;
			}
		}
	}
	cout << str;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}