#include<bits/stdc++.h>
using namespace std;

int main(){
  int n, tgt; cin >> n >> tgt;
  vector<int> a(n);
  for(auto &x : a) cin >> x;
  vector<vector<int>> dp(n + 1, vector<int> (tgt + 1));
  for(int i = 0; i <= n; i++) dp[i][0] = 1;
  for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= tgt; j++) {
          dp[i][j] = dp[i - 1][j];
          if(j - a[i - 1] >= 0) dp[i][j] += dp[i - 1][j - a[i - 1]];
      }
  }
  cout << dp[n][tgt] << endl;
}
