#include <bits/stdc++.h>
using namespace std;
#define ar array

int score[4];

void solve(){
	int lastscore;
	bool record = false;
	for(int i = 0; i < 4; i++)
		cin >> score[i];
	cin >> lastscore;
	sort(score,score + 4);
	if(score[3] > lastscore)
		cout << ": catatan baru!\n";
	else
		cout << ": tidak ada catatan baru\n";
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t, i = 1;
	cin >> t;
	while(t--){
		cout << "Kasus #" << i;
		solve();
		++i;
	}
}