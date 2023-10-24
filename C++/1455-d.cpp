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
template <typename T, typename S> void DEBUG_PRINTER(vector<pair<T, S>> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i].first << " -> " << var[i].second
         << (i == var.size() - 1 ? "" : endl);
}
template <typename T, typename S> void DEBUG_PRINTER(umap<T, S> var) {
  cout << endl;
  for (auto &it : var)
    cout << it.first << " -> " << it.second << endl;
}
template <typename T, typename S> void DEBUG_PRINTER(map<T, S> var) {
  cout << endl;
  for (auto &it : var)
    cout << it.first << " -> " << it.second << endl;
}
// end of template

void solve() {
  int n, x, ans = 0;
  cin >> n >> x;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  if (is_sorted(all(a))) {
    cout << 0;
  } else {
    rep(i, n) {
      if (a[i] > x) {
        swap(a[i], x);
        ans++;
      }
      if (is_sorted(all(a))) {
        cout << ans;
        return;
      }
    }
    if (is_sorted(all(a))) {
      cout << ans;
    } else {
      cout << -1;
    }
  }
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
