#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int n,totalBestRecord = 0,totalWorstRecord = 0;
	cin >> n;
	long data[n];
	for(int i = 0; i < n; i++){
		cin >> data[i];
	}
	int maxStartPoint = data[0];
	for(int i = 1; i < n; i++){
		if(maxStartPoint < data[i]){
			totalBestRecord++;
			maxStartPoint = data[i];
		}
	}
	int minStartPoint = data[0];
	for(int i = 1; i < n; i++){
		if(minStartPoint > data[i]){
			totalWorstRecord++;
			minStartPoint = data[i];
		}
	}
	cout << totalBestRecord << " " << totalWorstRecord;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}