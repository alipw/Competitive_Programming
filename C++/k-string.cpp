#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}

void solve(){
	int k;
	cin >> k;
	string s,s2,s3;
	cin >> s;
	umap<char,int> mp;
	for(int i = 0; i < s.length(); i++){
		if(mp[s[i]] == 0){
			s2.push_back(s[i]);
		}
		mp[s[i]]++;
	}
	bool ok = true;
	for(int i = 0; i < s2.length(); i++){
		if(mp[s2[i]] % k != 0){
			ok = false;
			break;
		}
	}
	for(int i = 0; i < s2.length(); i++){
		for(int j = 0; j < mp[s2[i]] / k; j++){
			s3.push_back(s2[i]);
		}
	}
	if(ok || k == 1){
		if(k == 1){
			cout << s;
		}else{
			for(int i = 0; i < s.size() / s3.size(); i++) cout << s3;
		}
	}else{
		cout << -1;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}