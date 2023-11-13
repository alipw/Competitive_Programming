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
template <typename T> void DEBUG_PRINTER(set<T> var) {
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
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
void solve() {
  int n, m; cin >> n >> m;
  ll ans = 0;
  vector<pair<ll,ll>> wv(n);
  multiset<ll> s;

  for(auto &x : wv) {
    cin >> x.first;
    cin >> x.second;
  }
  for(int i = 0; i < m; i++) {
    int x; cin >> x;
    s.insert(x);
  }
  // w and v can be completely unrelated
  sort(rall(wv), [](auto &left, auto &right){
    return left.second < right.second;
  });

  for(auto &x : wv) {
    auto idx = s.lower_bound(x.first);
    if(idx != s.end()) {
      ans += x.second;
      s.erase(idx);
    }
  }

  cout << ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

