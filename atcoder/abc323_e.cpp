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

template <i64 mod = MOD>
struct mint{
    i64 p;

    mint() : p(0){}
    mint(i64 x){p = x >= 0 ? x % mod : x + (-x + mod - 1) / mod * mod;}

    mint& operator+=(const mint& y){p = p + *y - ((p + *y) >= mod ? mod : 0); return *this;}
    mint& operator-=(const mint& y){p = p - *y + (p - *y < 0 ? mod : 0); return *this;}
    mint& operator*=(const mint& y){p = (p * *y) % mod; return *this;}
    mint& operator%=(const mint& y){if(y)p %= *y; return *this;}

    mint operator+(const mint& y) const{mint x = *this; return x += y;}
    mint operator-(const mint& y) const{mint x = *this; return x -= y;}
    mint operator*(const mint& y) const{mint x = *this; return x *= y;}
    mint operator%(const mint& y) const{mint x = *this; return x %= y;}

    friend ostream& operator<<(ostream& stream, const mint<mod>& x){
        stream << *x;
        return stream;
    }

    friend ostream& operator>>(ostream& stream, const mint<mod>& x){
        stream >> *x;
        return stream;
    }

    mint& operator++(){p = (p + 1) % mod; return *this;}
    mint& operator--(){p = (p - 1 + mod) % mod; return *this;}

    bool operator==(const mint& y) const{return p == *y;}
    bool operator!=(const mint& y) const{return p != *y;}

    const i64& operator*() const{return p;}
    i64& operator*(){return p;}

};

// end of template

const int maxN = 1e4 + 1;
const int mod = 998244353;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  vector<mint<mod>> p(n);

  for(int &x : a) cin >> x;
  for(int i = 0; i < n; i++) {
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

