#include<bits/stdc++.h>
using namespace std;


int main(){
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>> (2, vector<int> (2, 0)));
    //is dp not possible?
    //i mean when to choose the next element?
    for(int i = 0; i < n; i++) {
      if(min(dp[i][0][0] + a[i], dp[i][0][1]) > min(dp[i][1][0] + a[i], dp[i][1][1])){
        dp[i + 1][0][0] = dp[i][0][0] + a[i];
        dp[i + 1][0][1] = dp[i][0][1];
      } else if(min(dp[i][0][0] + a[i], dp[i][0][1]) > min(dp[i][1][0] + a[i], dp[i][1][1])) {
        dp[i + 1][0][0] = dp[i][1][0] + a[i];
        dp[i + 1][0][1] = dp[i][1][1];
      } else {
        if((dp[i][0][0] + dp[i][0][1]) >= (dp[i][1][0] + dp[i][1][1])) {
          dp[i + 1][0][0] = dp[i][0][0] + a[i];
          dp[i + 1][0][1] = dp[i][0][1];
        } else {
          dp[i + 1][0][0] = dp[i][1][0] + a[i];
          dp[i + 1][0][1] = dp[i][1][1];
        }
      }

      if(min(dp[i][0][0], dp[i][0][1] + b[i]) > min(dp[i][1][0], dp[i][1][1] + b[i])) {
        dp[i + 1][1][0] = dp[i][0][0];
        dp[i + 1][1][1] = dp[i][0][1] + b[i];
      } else if(min(dp[i][0][0], dp[i][0][1] + b[i]) < min(dp[i][1][0], dp[i][1][1] + b[i])){
        dp[i + 1][1][0] = dp[i][1][0];
        dp[i + 1][1][1] = dp[i][1][1] + b[i];
      } else {
        if((dp[i][0][0] + dp[i][0][1]) >= (dp[i][1][0] + dp[i][1][1])) {
          dp[i + 1][1][0] = dp[i][0][0];
          dp[i + 1][1][1] = dp[i][0][1] + b[i];
        } else {
          dp[i + 1][1][0] = dp[i][1][0];
          dp[i + 1][1][1] = dp[i][1][1] + b[i];
        }
      }
    }
    // for(int i = 0; i <= n; i++) {
    //   printf("{%d, %d}, {%d, %d}\n", dp[i][0][0], dp[i][0][1], dp[i][1][0], dp[i][1][1]);
    // }
    if(min(dp[n][0][0], dp[n][0][1]) > min(dp[n][1][0], dp[n][1][1])) {
      cout << min(dp[n][0][0], dp[n][0][1]);
    } else {
      cout << min(dp[n][1][0], dp[n][1][1]);
    }
    cout << endl;
  }
}
