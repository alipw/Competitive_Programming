#include <bits/stdc++.h>
using namespace std;
#define ar array

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector<int> b;
	vector<int> a;
	int temp,pointsOfa,pointsOfb = 0;
	for(int i = 0; i < 3; i++){
		cin >> temp;
		a.push_back(temp);
	}
	for(int i = 0; i < 3; i++){
		cin >> temp;
		b.push_back(temp);
	}
	for(int i = 0; i < 3; i++){
		if(a.at(i) > b.at(i))
			pointsOfa++;
		else if(a.at(i) < b.at(i))
			pointsOfb++;
	}
	cout << pointsOfa << " "<<pointsOfb;

}
