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

bool isInt(long double v) {
    return floor(v) == ceil(v);
}

void solve() {
    int q; cin >> q;
    for(int i = 0; i < q; i++) {
        ull a,p; cin >> a >> p;
        long double sqrtpart = sqrt(pow((long double)p, 2.0L) - 16.0L * (long double)a);
        long double sol1 = ((long double)p - sqrtpart) / 4.0L;
        long double sol2 = (sqrtpart + (long double)p) / 4.0L;

        // debug(sqrtpart);
        // debug(sol1);
        // debug(sol2);
        // debug(isInt( sqrtpart ));
        // debug(isInt( sol1 ));
        // debug(isInt( sol2 ));

        if(p % 2 == 0 && (isInt(sol1) || isInt(sol2)) && (sol1 > 0 || sol2 > 0) && (a % uint64_t(sol1) == 0 || a % uint64_t(sol2) == 0)) {
            cout << "possible";
        } else cout << "impossible";
        cout << endl;
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

