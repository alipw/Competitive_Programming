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

template <i64 mod = MOD> struct ModInt {
  i64 p;

  ModInt() : p(0) {}
  ModInt(i64 x) { p = x >= 0 ? x % mod : x + (-x + mod - 1) / mod * mod; }

  ModInt &operator+=(const ModInt &y) {
    p = p + *y - ((p + *y) >= mod ? mod : 0);
    return *this;
  }
  ModInt &operator-=(const ModInt &y) {
    p = p - *y + (p - *y < 0 ? mod : 0);
    return *this;
  }
  ModInt &operator*=(const ModInt &y) {
    p = (p * *y) % mod;
    return *this;
  }
  ModInt &operator%=(const ModInt &y) {
    if (y)
      p %= *y;
    return *this;
  }

  ModInt operator+(const ModInt &y) const {
    ModInt x = *this;
    return x += y;
  }
  ModInt operator-(const ModInt &y) const {
    ModInt x = *this;
    return x -= y;
  }
  ModInt operator*(const ModInt &y) const {
    ModInt x = *this;
    return x *= y;
  }
  ModInt operator%(const ModInt &y) const {
    ModInt x = *this;
    return x %= y;
  }

  friend ostream &operator<<(ostream &stream, const ModInt<mod> &x) {
    stream << *x;
    return stream;
  }

  friend ostream &operator>>(ostream &stream, const ModInt<mod> &x) {
    stream >> *x;
    return stream;
  }

  ModInt &operator++() {
    p = (p + 1) % mod;
    return *this;
  }
  ModInt &operator--() {
    p = (p - 1 + mod) % mod;
    return *this;
  }

  bool operator==(const ModInt &y) const { return p == *y; }
  bool operator!=(const ModInt &y) const { return p != *y; }

  const i64 &operator*() const { return p; }
  i64 &operator*() { return p; }
};

char conv(ll x){
    if(x == 10){
        return 'a';
    } else if(x == 11){
        return 'b';
    } else if(x == 12){
        return 'c';
    } else if(x == 13){
        return 'd';
    } else if(x == 14){
        return 'e';
    } else if(x == 15){
        return 'f';
    }
    return '0' + x;
}

// end of template
void solve() {
  ll q, m; cin >> q >> m;
  ll x, n;
  while(q--){
    cin >> x;
    if(m == 0){
        cout << "0\n";
        continue;
    }
    n = m;
    ll p = x;
    string res = "";
    while(n > 0){
        res = conv(n%x) + res;
        n /= x;

    }
    cout << res  << "\n";
    
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
