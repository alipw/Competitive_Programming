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
inline string
to_string(__int128 __val)
{ return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
                   4 * sizeof(__int128),
                   "%lll", __val); }

// end of template
void print(__int128 x, string &S) {
    if (x < 0) {
        putchar('-');
        x = -x;
    }
    if (x > 9) print(x / 10, S);
    S += x % 10 + '0';
    // putchar(x % 10 + '0');
}
void solve() {
    ull a, b; cin >> a >> b;
    a /= 2;
    b = b / 2 + (b % 2);

    __int128 ans = ((__int128(b) * __int128(b)) - (__int128(a) * __int128(a)));
    string stringed;
    print(ans, stringed);
    if(ans > 1000) {
        int n = stringed.length();
        for(int i = n - 3; i < n; i++) cout << stringed[i];
    } else {
        cout << stringed;
    }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
