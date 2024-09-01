#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<vector<int>> dp(2*1e5+28, vector<int>(4, INT_MAX));
  dp[1] = {0, INT_MAX ,INT_MAX, INT_MAX};

  for(int i = 1; i <= n; i++) {
    for(int j = 0; j < 4; j++) {
      if(dp[i][j] != INT_MAX) {
        if(j == 0) dp[i * 2][j + 1] = min(dp[i][j] + 1, dp[i * 2][j + 1]);
        if(j >= 2) dp[i * 2][0] = min(dp[i][j] + 1, dp[i * 2][0]);
        dp[i + 3][2] = min(dp[i][j] + 1, dp[i + 3][2]);
      }
    }
  }
  int ans = INT_MAX;
  for(int i = 0; i < 4; i++) ans = min(ans, dp[n][i]);
  cout << (ans == INT_MAX ? -1 : ans) << endl;
}
