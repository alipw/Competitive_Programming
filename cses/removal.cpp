#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  long long sum = 0;
  for(auto &x : a) {
    cin >> x;
    sum += x;
  }

  long long dp[n][n];
  memset(dp, 0, sizeof(dp));

  for(int l = n - 1; l >= 0; l--) {
    for(int r = l; r < n; r++) {
      if(l == r)  dp[l][r] = a[l];
      else dp[l][r] = max(a[l] - dp[l + 1][r], a[r] - dp[l][r - 1]);
    }
  }

  cout << (sum + dp[0][n - 1]) / 2 << endl;
}
