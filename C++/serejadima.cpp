#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n,s = 0,d = 0;
	cin >> n;
	int data[n];
	for(int i = 0;i < n; i++){
		cin >> data[i];
	}
	int i = 0, j = n - 1, k = 1;
	while(k <= n){
		if(k % 2 != 0){
			if(data[i] > data[j]){
				s += data[i];
				i++;
			}
			else{
				s += data[j];
				j--;
			}
		}else{
			if(data[i] > data[j]){
				d += data[i];
				i++;
			}
			else{
				d += data[j];
				j--;
			}
		}

		k++;
	}
	cout << s << " " << d;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}