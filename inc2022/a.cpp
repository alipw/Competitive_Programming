#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define i64 long long int
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

template <i64 mod> struct Mint {
  i64 p;

  Mint() : p(0) {}
  Mint(i64 x) { p = x >= 0 ? x % mod : x + (-x + mod - 1) / mod * mod; }

  Mint &operator+=(const Mint &y) {
    p = p + *y - ((p + *y) >= mod ? mod : 0);
    return *this;
  }
  Mint &operator-=(const Mint &y) {
    p = p - *y + (p - *y < 0 ? mod : 0);
    return *this;
  }
  Mint &operator*=(const Mint &y) {
    p = (p * *y) % mod;
    return *this;
  }
  Mint &operator%=(const Mint &y) {
    if (y)
      p %= *y;
    return *this;
  }

  Mint operator+(const Mint &y) const {
    Mint x = *this;
    return x += y;
  }
  Mint operator-(const Mint &y) const {
    Mint x = *this;
    return x -= y;
  }
  Mint operator*(const Mint &y) const {
    Mint x = *this;
    return x *= y;
  }
  Mint operator%(const Mint &y) const {
    Mint x = *this;
    return x %= y;
  }

  friend ostream &operator<<(ostream &stream, const Mint<mod> &x) {
    stream << *x;
    return stream;
  }

  friend ostream &operator>>(ostream &stream, const Mint<mod> &x) {
    stream >> *x;
    return stream;
  }

  Mint &operator++() {
    p = (p + 1) % mod;
    return *this;
  }
  Mint &operator--() {
    p = (p - 1 + mod) % mod;
    return *this;
  }

  bool operator==(const Mint &y) const { return p == *y; }
  bool operator!=(const Mint &y) const { return p != *y; }

  const i64 &operator*() const { return p; }
  i64 &operator*() { return p; }
};

// end of template

void solve() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  sort(rall(a));
  int ans = INT_MIN;
  int validans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++)  {
      for(int k = j + 1; k < n; k++) {
        if(max(a[i], max(a[j], a[k])) - min(a[i], min(a[j], a[k])) <= m){
          validans++;
          ans = max(ans, a[i] + a[j] + a[k]);
        }
      }
    }
  }
  if(validans == 0)cout << -1;
  else cout << validans << " " << ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
