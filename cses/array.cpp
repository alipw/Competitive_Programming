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

// end of template
// int dp[maxN][maxM];
// void solve() {
//   int n, x;
//   cin >> n >> x;
//   vector<int> a(n);
//   for (int &x : a)
//     cin >> x;
//   if (a[0] == 0)
//     for (int i = 0; i < maxM; i++)
//       dp[0][i] = 1;
//
//   for (int i = 1; i <= n; i++) {
//     for (int v = 1; v <= x; v++) {
//       if (a[i] == 0) {
//
//       } else {
//         for (int c : {a[i] - 1, a[i], a[i] + 1})
//           dp[i][v] += dp[i - 1][c];
//       }
//     }
//   }
//   int ans = 0;
//   for (int i = 0; i <= maxM; i++) {
//     ans += dp[n - 1][i];
//   }
//   cout << ans << endl;
// }
//

vector<int> a;
int n, m;
const int maxN = 1e5 + 1;
const int maxM = 1e2 + 1;
int dp[maxN][maxM];

int solveRec(int i, int curpath) {
  if(dp[i][curpath] != INT_MIN) return dp[i][curpath];
  if(i == a.size() - 1) {
    if(a[i] == 0) {
      dp[i][curpath] = 1;
      return dp[i][curpath];
    } else { 
      dp[i][curpath] = abs(a[i] - curpath) <= 1;
      return dp[i][curpath];
    }
  }
  if(a[i] == 0) {
    dp[i][curpath] = 0;
    for(int j = 1; j <= m; j++) {
      dp[i][curpath] += solveRec(i + 1, j) % MOD;
      dp[i][curpath] %= MOD;
    }
    return dp[i][curpath];
  } else {
    if(abs(a[i] - curpath) > 1) {
      dp[i][curpath] = 0;
      return dp[i][curpath];
    } 
    dp[i][curpath] = solveRec(i + 1, a[i]) % MOD;
    return dp[i][curpath];
  }
}

void solve() {
  cin >> n >> m;
  vector<int> arr(n);
  for(int &x : arr) cin >> x;
  a = arr;

  for(int i = 0; i < maxN; i++) {
    for(int j = 0; j < maxM; j++) dp[i][j] = INT_MIN;
  }

  if(a[0] == 0) {
    int ans = 0;
    for(int i = 1; i <= m; i++) {
      ans += solveRec(1, i) % MOD; 
      ans %= MOD;
    }
    cout << ans;
  } else {
    cout << solveRec(1, a[0]);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
