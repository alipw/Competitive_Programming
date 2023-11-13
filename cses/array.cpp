#include <bits/stdc++.h>
#include <cinttypes>
#include <math.h>
using namespace std;
#define endl "\n"
#define MOD (int)1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define absolute(a) sqrt((a) * (a))
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define debug(a)                                                               \
  {                                                                            \
    cout << "[" << #a << " : ";                                                \
    DEBUG_PRINTER((a));                                                        \
    cout << "]\n";                                                             \
  }
template <typename T> void DEBUG_PRINTER(T var) { cout << var; }
template <typename T> void DEBUG_PRINTER(vector<T> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(pair<T, S> var) {
  cout << var.first << ", " << var.second;
}
template <typename T, typename S> void DEBUG_PRINTER(vector<pair<T, S>> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i].first << " -> " << var[i].second
         << (i == var.size() - 1 ? "" : endl);
}
template <typename T, typename S> void DEBUG_PRINTER(umap<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(map<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}


void solve() {
  int n, m;
  // vector<int> a(n); for(int & x : a) cin >> x;
  // vector<vector<int>> dp(n, vector<int> (m + 1));
  n = 10;
  int arr[n];
  for(int i = 0; i < n; i++) cout << arr[i] << endl;
  // m = 5;
  // int dp[n][m + 1];
  // for(int i = 0; i < n; i++) {
  //   for(int j = 0; j <= m; j++) {
  //     debug(dp[i][j]);
  //   }
  // }

  // if(a[0] == 0) {
  //   for(int i = 1; i <= m; i++) dp[0][i] = 1;
  // } else {
  //   dp[0][a[0]] = 1;
  // }
  //
  // for(int i = 0; i < n; i++) debug(dp[i]);
  // for(int i = 1; i < n; i++) {
  //   if(a[i] == 0) {
  //     for(int j = 1; j <= m; j++) {
  //
  //     }
  //   } else {
  //     for(int j = max(1, a[i] - 1); j <= min(m, a[i] + 1); j++){
  //       dp[i][a[i]] = dp[i - 1][j];
  //     }
  //   }
  // }

}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
