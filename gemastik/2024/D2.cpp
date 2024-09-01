#include<bits/stdc++.h>
#define ll uint64_t

using namespace std;
const ll mxp = 65;
ll c[mxp][mxp];

int main(){
  ll n,k; 
  cin >> n >> k; k--;
  for(int i = 0; i < mxp; i++)  {
    for(int j = 0; j <= i; j++) {
      if(i == 0 || j == 0) c[i][j] = 1;
      else c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
  // printf("c[%lu][%lu]: %lu\n", n, k + 1, c[n][k + 1]);
  string s; 
  for(int i = 0; i < mxp; i++) s += "0";
  for(int i = 63; i >= 0; i--) {
    if(c[i][n] <= k) {
      // printf("c[%d][%lu]: %lu\n", i, n, c[i][n]);
      s[i] = '1';
      k -= c[i][n];
      n--;
    }
  }
  bool f = 0;
  for(int i = 63; i >= 0; i--) {
    f = f || s[i] == '1';
    if(f) cout << s[i];
  }
  cout << endl;
}
