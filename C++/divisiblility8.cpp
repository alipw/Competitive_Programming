#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
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
	string a;
	cin >> a;
	for(int i = 0; i < a.size(); i++){
		if(a[i] == '8' || a[i] == '0') {
			cout << "YES\n" << a[i];
			return;
		}
	}
	string cur = "AB";
	for(int i = 0; i < a.size(); i++){
		cur[0] = a[i];
		for(int j = i + 1; j < a.size(); j++){
			cur[1] = a[j];
			if(stoi(cur) % 8 == 0) {
				cout << "YES\n" << cur;
				return;
			}
		}
	}
	cur = "abc";
	for(int i = 0; i < a.size(); i++){
		cur[0] = a[i];
		for(int j = i + 1; j < a.size(); j++){
			cur[1] = a[j];
			for(int k = j + 1; k < a.size(); k++){
				cur[2] = a[k];
				if(stoi(cur) % 8 == 0){
					cout << "YES\n" << cur;
					return;
				}
			}
		}
	}
	cout << "NO";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
