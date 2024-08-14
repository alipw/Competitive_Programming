#include<bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int ans = 0, lo = 1;
  for(int i = 1; i < s.length(); i++) {
    if(s[i] == s[i - 1]) lo++;
    else ans = max(lo, ans), lo = 1;
  }
  ans = max(lo, ans);
  cout << ans << endl;
}
