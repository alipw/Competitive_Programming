#include<bits/stdc++.h>
#include <string>
#define ll uint64_t

using namespace std;
const ll mxp = 65;
ll c[mxp][mxp];

int main(){
  ll n,k; n = 30;
  cin >> k; k--;
  for(int i = 0; i < mxp; i++)  {
    for(int j = 0; j <= i; j++) {
      if(i == 0 || j == 0) c[i][j] = 1;
      else c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
  string s; 
  for(int i = 0; i < mxp; i++) s += "0";
  for(int i = 63; i >= 0; i--) {
    if(c[i][n] <= k) {
      s[i] = '1';
      k -= c[i][n];
      n--;
    }
  }
  reverse(s.begin(), s.end());
  cout << stoll(s, nullptr, 2) << endl;
}
