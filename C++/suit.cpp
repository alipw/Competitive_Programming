#include <bits/stdc++.h>
using namespace std;
#define ar array

//baris pertama eko
//baris kedua ganesh

//e = gajah
//h = manusia
//a = semut

//aturan
//e > h
//h > a
//a > e

//beritau komputer kalau e > h = p1++, h > a = p1++,  

void solve(){
	string p1,p2;
	long long int pt1 = 0,pt2 = 0;
	getline(cin,p1);
	getline(cin,p2);
	for(long long int i = 0; i < p1.size(); i++){
		if(p1[i] == 'e'){
			if(p2[i] == 'h')
				pt1++;
			else if(p2[i] == 'a')
				pt2++;
		}
		if(p1[i] == 'a'){
			if(p2[i] == 'e')
				pt1++;
			else if(p2[i] == 'h')
				pt2++;
		}
		if(p1[i] == 'h'){
			if(p2[i] == 'a')
				pt1++;
			else if(p2[i] == 'e')
				pt2++;
		}
	}
	if(pt1 > pt2)
		cout << "Eko wins\n";
	else if (pt1 < pt2)
		cout << "Ganesh wins\n";
	else
		cout << "Draw\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}