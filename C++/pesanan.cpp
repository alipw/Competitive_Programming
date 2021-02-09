#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	long a, b , n;
	cin >> a >> b >> n;
	int j = min(a,b);
	while(true){
		if(a % j == 0 && b % j == 0){
			break;
		}else
			j--;
	}
	long i = max(a,b);
	while(true){
		if(i % a  == 0 && i % b == 0){
			break;
		}else  
			i+= j ;
	}
	// i = 70
	if((n - i) % min(a,b) == 0){
		cout << i/max(a,b);
		cout << " ";
		cout << (n-i) / min(a,b);
	}else{
		cout << "Pesan Ulang";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}