#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull uint64_t
#define ll int64_t
#define lll __int128
#define ulll __uint128
#define umap unordered_map
#define uset unordered_set
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define exist(a, n) a.find(n) != a.end()
#define debug(a){ cout << "[" << #a << " : "; DEBUG_PRINTER((a)); cout << "]\n"; }
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
template <typename T> void DEBUG_PRINTER(set<T> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << *it << (j == var.size() - 1 ? "" : ", ");
}
template <typename T> void DEBUG_PRINTER(uset<T> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << *it << (j == var.size() - 1 ? "" : ", ");
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

void solve() {
  int n; cin >> n;
  umap<int, uset<int>> g;
  vector<int> marked(n + 1);
  uset<int> leafs;

  for(int i = 0; i < n - 1; i++) {
    int a,b; cin >> a >> b;
    g[a].insert(b);
    g[b].insert(a);
  }

  if(n == 2) {
    cout << 0;
    return;
  }

  for(const auto &[node, neighbors] : g) {
    if(neighbors.size() == 1) {
      marked[node] = 1; leafs.insert(node);
      for(auto &nei : neighbors) marked[nei] = 1;
    }
  }

  umap<bool, ll> cc; // color count
  vector<bool> visited(n + 1);

  auto dfs = [&](const int &node, bool curcolor, auto &&dfs) -> void {
    if(visited[node] || marked[node]) return;

    cc[curcolor]++;
    visited[node] = true;
    for(const int &nei : g[node]) dfs(nei, !curcolor, dfs);

    return;
  };

  ll ans = 0;
  for(const auto &[node, neigh] : g) {
    if(!marked[node] && !visited[node]) {
      cc[0] = 0; cc[1] = 0;
      dfs(node, true, dfs);
      ans += max(cc[0], cc[1]);
    }
  }

  ans += leafs.size();
  cout << ans * (n - 1);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  cout << endl;
  return 0;
}

