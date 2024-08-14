#include<bits/stdc++.h>
using namespace std;

#define not_found string::npos
int main(){
  int tt; cin >> tt;
  while(tt--) {
    string a,b; cin >> a >> b;
    int ans = a.length() + b.length(), re = 0;
    for(int i = 0; i < b.length(); i++) {
      int j = i;
      for(auto c : a) {
        if(j >= b.length()) break;
        if(b[j] == c) j++;
      }
      re = max(re, j - i);
    }
    cout << ans - re << endl;
  }
}
