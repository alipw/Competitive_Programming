#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ull unsigned long long int
#define v vector
#define umap unordered_map


void solve(){
	int n,m,k;
	cin >> n >> m >> k;
	if(m == 0){
		cout << 0;
	}else{
		int max_possible = n / k;
		int a, b = 0;
		while(max_possible > 0 && m > 0){
			a++;
			max_possible--;
			m--;
		}
		int pointer = 1;
		while(m--){
			if(pointer == k){
				pointer = 1;
			}if(pointer == 1){
				b++;
			}
			pointer++;
		}
		cout << a - b;
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