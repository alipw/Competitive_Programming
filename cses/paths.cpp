#include <bits/stdc++.h>
#include <climits>
using namespace std;
#define endl "\n"
#define MOD int(1e9+7)
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

vector<vector<int>> grid;
const int maxN = 1e6 + 1;
int n, ans = 0; 
uint dp[1001][1001];

int solverec(int i, int j) {
    if(i == n) return 0;
    if(j == n) return 0;
    if(grid[i][j] == '*') return 0;

    if(dp[i][j] != INT_MAX) {
        return dp[i][j];
    }

    dp[i][j] = solverec(i + 1, j) % MOD + solverec(i, j + 1) % MOD;
    return dp[i][j] % MOD;
}

void solve() {
    cin >> n;
    grid = vector<vector<int>> (n, vector<int> (n, 0));

    for(int i = 0; i < 1001; i++) {
        for(int j = 0; j < 1001; j++) dp[i][j] = INT_MAX;
    }

    for(int i = 0; i < n; i++) {
        string row; cin >> row;
        for(int j = 0; j < n; j++) grid[i][j] = row[j];
    }
    dp[n - 1][n - 1] = 1;

    cout << solverec(0, 0);
}

int main() {
  // ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

