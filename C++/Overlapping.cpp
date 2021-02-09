#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
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
	string s;
	cin >> s;
	int n = s.size();
	int option = 0, ab = 0, ba = 0;
	rep(i,s.size()){
		if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A'){
			option++;
			i+=3;
		}
		if(s[i] == 'B' && s[i + 1] == 'A' && s[i + 2] == 'B'){
			option++;
			i+=3;
		}
		if(s[i] == 'A' && s[i + 1] == 'B' && s[i + 1] != 'A'){
			ab++;
			i++;
		}if(s[i] == 'B' && s[i + 1] == 'A' && s[i + 1] != 'B'){
			ba++;
			i++;
		}
	}
	if(option == 0){
		if(ab > 0 && ba > 0) cout << "YES";
		else cout << "NO";
	}else if(option >= 1){
		if(ab > 0 || ba > 0 || option >= 2) cout << "YES";
		else cout << "NO";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
