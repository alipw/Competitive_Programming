#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define vpp vector<pair<int,int>>
#define gcd(a,b) __gcd(a,b)
#define rep(i,n) for(int i = 0; i < n; ++i)
#define repdec(i,n) for(int i = n - 1; i >= 0; --i)
#define repdef(i,a,n) for(int i = a; i < n; ++i)
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}
//end of template

void solve(){
	int m,s;
	cin >> m >> s;
	vector<int> maxx;
	if(s > m * 9 || m > 1 && s == 0){
		cout << "-1 -1";
	}else{
		if(s == 0 && m == 1) cout << "0 0";
		else{
			int k = s, counter = m;
			while(k >= 9){
				maxx.push_back(9);
				k-=9;
				counter--;
			}
			while(counter--){
				maxx.push_back(k);
				k = 0;
			}
			vector<int> minn = maxx;
			bool minus = false;
			if(minn[minn.size() - 1] == 0){
				minn[minn.size() - 1] = 1;
				minus = true;
			}
			cout << minn[minn.size() - 1];
			for(int i = minn.size() - 2; i >= 0; i--){
				if(minn[i] > 0 && minus) {
					cout << minn[i] - 1;
					minus = false;
				}
				else cout << minn[i];
			}
			cout << " ";
			for(int i = 0; i < maxx.size(); i++) cout << maxx[i];
		}
	}
	
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}
