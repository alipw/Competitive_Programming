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

umap<int, set<int>> g;
vector<int> dist;
bool vis[(size_t)(2 * 1e5 + 1)];
int nedg, maxd = INT_MIN; 

void dfs(int sn, int d = 0) {
  if(vis[sn]) return;
  if(maxd < d) {
    maxd = d;
    nedg = sn;
  }
  vis[sn] = 1;
  for(int c : g[sn]) dfs(c, d + 1);
}

void dfsmark(int sn, int dlm, int drm) {
  if(vis[sn]) return;
  dist[sn] = max(max(dlm, drm), dist[sn]);
  vis[sn] = 1;
  for(int c : g[sn]) dfsmark(c, dlm + 1, drm - 1);
}

void solve() {
  int n; cin >> n;
  dist.resize(n + 1);

  for(int i = 0; i < n - 1; i++) {
    int a,b; cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  memset(vis, 0, sizeof(vis)); dfs(1); int lm = nedg;
  memset(vis, 0, sizeof(vis)); maxd = INT_MIN; dfs(nedg); int rm = nedg;

  memset(vis, 0, sizeof(vis)); dfsmark(lm, 0, maxd);
  memset(vis, 0, sizeof(vis)); dfsmark(rm, 0, maxd);

  for(int i = 1; i <= n; i++) cout << dist[i] << " ";
  cout << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

