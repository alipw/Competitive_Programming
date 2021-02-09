#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < (n); ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	string a,b;
	// a >> b
	int ans = 0;
	cin >> a >> b;
	int x1,y1,x2,y2 = 0;
	vector<string> answer;
	string letter = "abcdefgh";
	rep(i,letter.size()){
		if(a[0] == letter[i]){
			x1 = i + 1;
			break;
		}
	}
	y1 = a[1] - '0';
	rep(i,letter.size()){
		if(b[0] == letter[i]){
			x2 = i + 1;
			break;
		}
	}
	y2 = b[1] - '0';
	while(x1 != x2 && y1 != y2){
		if(x1 < x2 && y1 > y2){
			x1++;
			y1--;
			answer.push_back("RD");
		}else if(x1 < x2 && y1 < y2){
			x1++;
			y1++;
			answer.push_back("RU");
		}else if(x1 > x2 && y1 > y2){
			x1--;
			y1--;
			answer.push_back("LD");
		}else if(x1 > x2 && y1 < y2){
			x1--;
			y1++;
			answer.push_back("LU");
		}
		ans++;
	}
	while(x1 != x2){
		if(x1 < x2){
			x1++;
			answer.push_back("R");
		}else if(x1 > x2){
			x1--;
			answer.push_back("L");
		}
		ans++;
	}
	while(y1 != y2){
		if(y1 < y2){
			y1++;
			answer.push_back("U");
		}else if(y1 > y2){
			y1--;
			answer.push_back("D");
		}
		ans++;
	}
	cout << ans << endl;
	rep(i,answer.size()){
		cout << answer[i] << endl;
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
