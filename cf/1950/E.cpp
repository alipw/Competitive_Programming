#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--){
    int n; cin >> n;
    string s; cin >> s;
    set<int> dvs; 

    for(int x = 1; x * x <= n; x++) {
      if(n % x != 0) continue;
      dvs.insert(x);
      dvs.insert(n / x);
    }

    for(int x : dvs){
      map<string,int> mp;
      for(int i = 0; i < n; i += x) {
        mp[s.substr(i, x)]++;
      }
      int mx = 0;
      string mxs;
      for(auto x : mp){ 
        if(x.second > mx) {
          mxs = x.first;
          mx = x.second;
        }
      }
      string rd;
      for(int i = 0; i < n; i += x) rd += mxs;

      int diff = 0;
      for(int i = 0; i < n; i++) diff += rd[i] != s[i];
      if(diff <= 1) {
        cout << x << endl;
        goto next;
      }
    }

  next:
    continue;

  }
}
