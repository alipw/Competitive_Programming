#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int n; cin >> n;
  string s; cin >> s;
  ll ans = 0;
  for(int i = 0; i < n; i++) if((s[i] - '0') % 2) ans += i / 2 + 1;
  cout << ans << endl;
}
