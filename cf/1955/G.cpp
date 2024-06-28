#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m; cin >> n >> m;
  int a[n][m], dp[n][m];

  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++) cin >> a[i][j];

  int Z = __gcd(a[0][0], a[n - 1][m - 1]);

  set<int> divisors; 
  for(int i = 1; i * i <= Z; i++) {
    if(Z % i == 0) {
      divisors.insert(Z / i); 
      divisors.insert(i);
    }
  }

  int ans = 1;
  for(int d : divisors) {
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;

    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        if(i == 0 && j == 0) continue;
        if(i != 0) dp[i][j] = dp[i][j] || (a[i][j] % d == 0) && dp[i - 1][j];
        if(j != 0) dp[i][j] = dp[i][j] || (a[i][j] % d == 0) && dp[i][j - 1];
      }
    }

    if(dp[n - 1][m - 1]) ans = max(ans, d);
  }

  cout << ans << endl;
}


