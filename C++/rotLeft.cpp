#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,d;
	cin >> n >> d;
	int array[n],temparr[n];
	for(int a = 0; a < n; a++)
		cin >> array[a];
	int index;
	for(int a = 0; a < n; a++){
		if(a - d >= 0 ){
			temparr[a-d] = array[a];
		}
		else{
			temparr[n-(d-a)] = array[a];
		}
	}
	for(int a = 0; a < n; a++)
		cout << temparr[a] << " ";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	solve();
}