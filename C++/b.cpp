#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	int array[n],array2[n*n];
	for(int i=0; i < n; i++)
		cin >> array[i]; 
	int f = 0;
	for(int a = 0; a < n; a++){
		for(int i=0; i < n; i++){
			array2[f] = array[i];
			++f;
		}
	}
	sort(array2,array2+f);
	int total,i = 1;
	for(int a = 0; a < f; a++){
		cout << "comparing.. " << array2[a] << " > " << array2[a+1] << "\n";
	}
	cout << total << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int t,i=1;
	cin >> t;
	while(t--){
		solve();
	}
}