#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n, ans = 0;
	cin >> n;
	unordered_map<string,int> cubeToInt;
	cubeToInt["Tetrahedron"] = 4;
	cubeToInt["Cube"] = 6;
	cubeToInt["Octahedron"] = 8;
	cubeToInt["Dodecahedron"] = 12;
	cubeToInt["Icosahedron"] = 20;
	string val;
	for(int i = 0;i < n; i++){
		cin >> val;
		ans += cubeToInt[val];
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}