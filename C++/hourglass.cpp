#include <bits/stdc++.h>
using namespace std;
#define ar array


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int array[6][6];
	for(int a = 0; a < 6; a++){
		for(int i=0;i < 6; i++){
			cin >> array[a][i];
		}
	}
	int max = -99999;
	for(int a = 0; a < 4; a++){
		for(int i=0; i < 4;i++){
			int number = array[a][i]  + array[a][i+1] + array[a][i+2] + array[a+1][i+1] + array[a+2][i]  + array[a+2][i+1] + array[a+2][i+2];
			if(number > max)
				max = number;
		}
	}
	cout << max;
}