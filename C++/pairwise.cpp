#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define v vector
#define umap unordered_map

void solve(){
	int data[3];
	for(int i = 0;i < 3; i++) cin >> data[i];
	sort(data,data+3);
	if(data[2] != data[1]){
		cout << "NO";
	}else{
		cout << "YES" << endl;
		cout << data[0] << " " << data[0] << " " << data[2];
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
}