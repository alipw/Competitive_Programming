#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  ll n,k,c[64][64]; 
  cin >> n >> k; k--;
  for(int i = 0; i <= 62; i++)  {
    for(int j = 0; j <= i; j++) {
      if(i - 1 < 0 || j - 1 < 0) c[i][j] = 1;
      else c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
  string s; 
  for(int i = 0; i < 64; i++) s += "0";
  for(int i = 63; i >= 0; i--) {
    if(c[i][n] <= k) {
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