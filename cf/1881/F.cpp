#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
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

// dp[i][0] maximum 
void solve() {
  int n, k; cin >> n >> k;
  bool marked[n + 1]; memset(marked, 0, sizeof(marked));
  vector<set<int>> g(n + 1); 

  int lm  = -1;
  for(int i = 0; i < k; i++) {
    int x; cin >> x;
    marked[x] = 1;
    lm = x;
  }

  for(int i = 0; i < n - 1; i++) {
    int a, b; cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  int maxx = INT_MIN, ex = 0;
  bool vis[n + 1]; memset(vis, 0, sizeof(vis));
  auto dfs = [&marked, &maxx, &ex, &vis, &g](const int &sn, int d, auto &&dfs) -> void {
    if(vis[sn]) return;
    if(marked[sn]) {
      if(d >= maxx) {
        maxx = d;
        ex = sn;
      }
    }
    vis[sn] = 1;
    for(const int &c : g[sn]){
      dfs(c, d + 1, dfs);
    }
  };

  dfs(lm, 0, dfs);
  memset(vis, 0, sizeof(vis));
  dfs(ex, 0, dfs);
  cout << ceil((double)maxx / 2.0L);
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

