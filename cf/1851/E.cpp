#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define i64 long long int
#define umap unordered_map
#define uset unordered_set
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define debug(a)                                                               \
  {                                                                            \
    cout << "[" << #a << " : ";                                                \
    DEBUG_PRINTER((a));                                                        \
    cout << "]\n";                                                             \
  } template <typename T> void DEBUG_PRINTER(T var) { cout << var; }
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
// end of template

// im trying everything i could at this point 
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

void solve() {
  ll k, n;
  cin >> n >> k;

  // DP STATE: minimum amount of coins required to get potion i
  // dp[i] = minimum coin required to get potion i
  vector<ll> dp(n); 
  vector<bool> minimized(n);
  vector<vector<int>> m(n);

  for(ll &x : dp) cin >> x;
  for(ll i = 0; i < k; i++){
    ll x; cin >> x;
    dp[x - 1] = 0;
  }

  for(int i = 0; i < n; i++) {
    ll mi; cin >> mi;
    m[i] = vector<int> (mi);
    if(mi == 0) continue;
    for(int j = 0; j < mi; j++){
      cin >> m[i][j];
    }
  }

  auto dfs = [&](int &po, auto&& dfs) -> ll {
    if(minimized[po - 1] || m[po - 1].size() == 0 || dp[po - 1] == 0) 
      return dp[po - 1];

    ll cost = 0;
    for(int &pt : m[po - 1]) {
      cost += dp[pt - 1] = min(dfs(pt, dfs), dp[pt - 1]);
      minimized[pt - 1] = 1;
    }

    return cost;
  };

  for(int i = 1; i <= n; i++) 
    dp[i - 1] = min(dfs(i, dfs), dp[i - 1]);

  for(ll cc : dp) cout << cc << " ";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int TEST_CASE;
  cin >> TEST_CASE;
  while (TEST_CASE--) {
    solve();
    cout << endl;
  }
  return 0;
}
