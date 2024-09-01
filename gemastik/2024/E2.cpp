#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n, k, ans = 0, calls = 0, lmax = 0;
vector<ll> a;
vector<ll> vv;
ll dp[1001][1001], svd[1001][1001];
map<int, map<int, map<int, int>>> dpp;
const int mod = 1e9+7;

int solve(int i, int j, int l = 2, int ansz = 0) {
  // calls++;
  // printf("%d-th call\n", calls);
  lmax = max(l, lmax);
  // if(svd[i][j]) {
  //   return;
  // }
  if(svd[i][j]) {
    for(int i = 0; i < l; i++) cout << "\t";
    printf("[DP]dp[%lld][%lld] = %lld -- L: %d, i: %lld, j: %lld\n",a[i], a[j], dp[i][j], l ,a[i], a[j]);
    // for(int i = 0; i < l; i++) cout << "\t";
    // printf("L: %d, i: %lld, j: %lld == %lld -- has been traversed, using dp instead\n",l ,a[i], a[j], dp[i][j]);
    return dp[i][j] + ((l >= k) * (k > 2));
    // ans %= mod;
  }
  if(j >= n) return 0;
  if(l >= k) {
    for(int i = 0; i < l; i++) cout << "\t";
    printf("L: %d, i: %lld, j: %lld\n",l ,a[i], a[j]);
    ans++;
    ans %= mod;
  }
  auto pos = lower_bound(a.begin() + j, a.end(), a[i] + a[j]);
  // printf("pos: %td\n", pos - a.begin());
  for(; pos != a.end(); pos++) {
    ansz += solve(j, pos - a.begin(), l + 1);
    ansz %= mod;
  }
  dp[i][j] = ansz;
  svd[i][j] = 1;
  return ansz;
}

int main(){
  cin >> n >> k; a.resize(n);

  ll realans = 0;
  for(auto &x : a) cin >> x;
  if(k > 45) {
    cout << k << endl;
    cout << 0 << endl;
    return 0;
  }
  for(int i = n - 1; i >= 0; i--) {
    for(int j = i - 1; j >= 0; j--) {
      // cout << " -------- " << endl;
      lmax = 2;
      ans = 0;
      ans += solve(j, i) % mod;
      printf("i: %lld, j: %lld = ",a[j], a[i]);
      cout << ans << endl;
      // cout << ans << endl << endl;
      // cout << " -------- " << endl;
      // if(lmax < k) continue;
      // svd[j][i] = 1;
      // dp[j][i] = ans;
      // dp[j][j] %= mod;
      realans += ans;
      realans %= mod;
    }
  }
  // for(int i = 0; i < n; i++) {
  //   for(int j = i + 1; j < n; j++) {
  //     ans = 0;
  //     solve(i, j);
  //     dp[i][j] = ans;
  //     svd[i][j] = 1;
  //   }
  // }
  // ans = 0;
  // for(int i = 0; i < n; i++) {
  //   for(int j = i + 1; j < n; j++) {
  //     printf("dp[%d][%d]: %lld\n", i, j, dp[i][j]);
  //     ans += dp[i][j];
  //   }
  // }
  cout << realans << endl;
}
