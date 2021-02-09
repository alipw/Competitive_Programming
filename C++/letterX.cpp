#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
void printAll(int a[], int size){
	for(int i = 0; i < size; i++) cout << a[i] << " ";
}
void printAll(vector<int> a){
	for(auto &i : a) cout << i << " ";
}

void solve(){
	int n,counter = 0;
	cin >> n;
	string str[n];
	for(int i = 0; i < n; i++) cin >> str[i];
	umap<char,int> mp;
	bool ok = true;
	const char lol = '*';
	char apa;
	for(int i = 0; i < n - 1; i++){
		if(str[i][i] != str[i + 1][i + 1]){
			ok = false;
			break;
		}

	}

	for(int i = 0, s = n - 1; i < n - 1; i++, s--){
		 if(str[i][s] != str[i + 1][s - 1]){
		 	ok = false;
		 	break;
		 }
	}

	if(ok){
		apa = str[0][0];
		for(int i = 0; i < n; i++){
			str[i][i] = '*';
		}

		for(int i = 0, s = n - 1; i < n; i++, s--){
			str[i][s] = '*';
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(str[i][j] != lol && mp[str[i][j]] == 0 || str[i][j] == apa){
				mp[str[i][j]]++;
				counter++;
			}
		}
	}
	if(counter == 1 && ok){
		cout << "YES";
	}else{
		cout << "NO";
	}
}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}
