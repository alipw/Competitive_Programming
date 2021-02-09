#include <bits/stdc++.h>
#define ar array
using namespace std;

int n,budget,prices[100000];

solve(){
	cin >> n >> budget;
	for(int i=0; i < n; i++)
		cin >> prices[i];
	sort(prices,prices+n);
	int total = 0;
	for(int i=0;i < n; i++){
		if(budget >= prices[i]){
			budget-=prices[i];
			total++;
		}
	}
	cout << total <<"\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t,i=1;
	cin >> t;
	while(t--){
		cout << "case #" << i << ": ";
		solve();
		++i;
	}
}