#include <bits/stdc++.h>
#include <cstdint>
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

void solve() {
  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    long double v, a, b;
    cin >> v >> a >> b;
    bool found = false;

    long double top = ceil(cbrt(v));
    long double down = 1.0L;

    long double mid = ceil((top + down) / 2.0L);
    long double vmid = mid * (a + mid) * (b + mid);
    long double prv = vmid;

    while (top >= down && vmid != v) {
      if (vmid < v) {
        down = mid + 1;
      } else {
        top = mid - 1;
      }

      mid = ceil((top + down) / 2.0L);
      vmid = mid * (a + mid) * (b + mid);
    }

    if (vmid == v) {
      a += mid;
      b += mid;
      cout << int64_t(2.0L * (a * b + b * mid + a * mid)) << endl;
    } else
      cout << "IMPOSSIBLE" << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
