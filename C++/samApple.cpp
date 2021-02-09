#include <bits/stdc++.h>
using namespace std;
#define ar array

void solve(){
	int a,b,s,t,m,n,distanceA,distanceB = 0;
	int ansA = 0, ansB = 0;

	cin >> s >> t;
	cin >> a >> b;
	cin >> m >> n;

	while(m--){
		cin >> distanceA;
		cout << "a : " << a << " - " << distanceA << " : " << a - distanceA;
		cout << "\n";
		if(a + distanceA >= s && a + distanceA <= t){
			ansA++;
		}
	}
	while(n--){
		cin >> distanceB;
		cout << "a : " << b << " - " << distanceB << " : " << b - distanceB;
		cout << "\n";
		if(b + distanceB >= s && b + distanceB <= t)
			ansB++;
	}

	cout << ansA << "\n";
	cout << ansB << "\n";

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}