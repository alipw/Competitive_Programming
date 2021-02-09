#include <iostream>
#include <unordered_map>
using namespace std
#define umap unordered_map

int main(){
	int n;
	cin >> n;
	string a,b;
	umap<int,int> mp;
	umap<int,int> mp2;
	cin >> a >> b;
	for(int i = 0; i < a.length(); i++) mp[a[i]]++;
	for(int i = 0; i < b.length(); i++) mp2[a[i]]++;
	if(mp == mp2) cout << "YES";
	else cout << "NO";
	cout << "\n";
}
