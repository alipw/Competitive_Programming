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
 //end of template

void solve(){
	int n,maxx = 0,maxy = 0,minx = 1000,miny = 1000,x = 0,y = 0,ans = 0;
	cin >> n;
	vector<pair<int,int>> a;
	rep(i,n){
		cin >> x >> y;
		a.push_back(make_pair(x,y));
	}
	for(int i = 0; i < n; i++){
		int counter = 0;
		int j = 0;
		while(j < n){
			if(a[j].first > a[i].first && a[j].second == a[i].second){
				counter++;
				break;
			}
			j++;
		}
		j = 0;
		while(j < n){
			if(a[j].first < a[i].first && a[j].second == a[i].second){
				counter++;
				break;
			}
			j++;
		}
		j = 0;
		while(j < n){
			if(a[j].second > a[i].second && a[j].first == a[i].first){
				counter++;
				break;
			}
			j++;
		}
		j = 0;
		while(j < n){
			if(a[j].second < a[i].second && a[j].first == a[i].first){
				counter++;
				break;
			}
			j++;
		}
		if(counter == 4){
			ans++;
		}
	}
	cout << ans;
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
