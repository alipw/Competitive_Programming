#include <bits/stdc++.h>
using namespace std;
//end of template

int main(){
	int n;
	cin >> n;
	bool prima = true;
	for(int i = 2; i < n; i++) prima = prima && (n % i != 0);
	cout << prima << endl;
}