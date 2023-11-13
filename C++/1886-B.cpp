#include <bits/stdc++.h>
#include <iomanip>
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
struct position {
  long double x;
  long double y;
};

// return the euclidean distance between two points
long double dist(position a, position b) {
  return sqrt(pow(a.x - b.x, 2.0L) + pow(a.y - b.y, 2.0L));
}

void solve() {
  position p, a, b;
  position zero = {0.0L, 0.0L};
  cin >> p.x >> p.y;
  cin >> a.x >> a.y;
  cin >> b.x >> b.y;

  cout << setprecision(10);
  cout << fixed;
  if (dist(a, p) <= dist(b, p) && dist(a, zero) <= dist(b, zero)) { // means a is closer to both zero and p
    cout << setprecision(10) << max(dist(a, p), dist(a, zero));
  } else if (dist(b, p) < dist(a, p) && dist(b, zero) < dist(zero, a)) { // means b is closer to both zero and p
    cout << setprecision(10) << max(dist(b, p), dist(b, zero));
  } else {
    // if a is closer to zero, then b is closer to p
    if (dist(a, zero) <= dist(b, zero)) {
      cout << setprecision(10)
           << max(max(dist(a, zero), dist(a, b) / 2.0L),
                  max(dist(b, p), dist(a, b) / 2.0L));
    } else { // but if a is closer to p, then b is closer to zero
      cout << setprecision(10)
           << max(max(dist(a, p), dist(a, b) / 2.0L),
                  max(dist(b, zero), dist(a, b) / 2.0L));
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
