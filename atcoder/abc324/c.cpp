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
    cerr << "[" << #a << " : ";                                                \
    DEBUG_PRINTER((a));                                                        \
    cerr << "]\n";                                                             \
  }
template <typename T> void DEBUG_PRINTER(T var) { cerr << var; }
template <typename T> void DEBUG_PRINTER(vector<T> var) {
  for (int i = 0; i < var.size(); ++i)
    cerr << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(pair<T, S> var) {
  cerr << var.first << ", " << var.second;
}
template <typename T, typename S> void DEBUG_PRINTER(vector<pair<T, S>> var) {
  for (int i = 0; i < var.size(); ++i)
    cerr << var[i].first << " -> " << var[i].second
         << (i == var.size() - 1 ? "" : endl);
}
template <typename T, typename S> void DEBUG_PRINTER(umap<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cerr << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(map<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cerr << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}

template <i64 mod = MOD>
struct ModInt{
    i64 p;

    ModInt() : p(0){}
    ModInt(i64 x){p = x >= 0 ? x % mod : x + (-x + mod - 1) / mod * mod;}

    ModInt& operator+=(const ModInt& y){p = p + *y - ((p + *y) >= mod ? mod : 0); return *this;}
    ModInt& operator-=(const ModInt& y){p = p - *y + (p - *y < 0 ? mod : 0); return *this;}
    ModInt& operator*=(const ModInt& y){p = (p * *y) % mod; return *this;}
    ModInt& operator%=(const ModInt& y){if(y)p %= *y; return *this;}

    ModInt operator+(const ModInt& y) const{ModInt x = *this; return x += y;}
    ModInt operator-(const ModInt& y) const{ModInt x = *this; return x -= y;}
    ModInt operator*(const ModInt& y) const{ModInt x = *this; return x *= y;}
    ModInt operator%(const ModInt& y) const{ModInt x = *this; return x %= y;}

    friend ostream& operator<<(ostream& stream, const ModInt<mod>& x){
        stream << *x;
        return stream;
    }

    friend ostream& operator>>(ostream& stream, const ModInt<mod>& x){
        stream >> *x;
        return stream;
    }

    ModInt& operator++(){p = (p + 1) % mod; return *this;}
    ModInt& operator--(){p = (p - 1 + mod) % mod; return *this;}

    bool operator==(const ModInt& y) const{return p == *y;}
    bool operator!=(const ModInt& y) const{return p != *y;}

    const i64& operator*() const{return p;}
    i64& operator*(){return p;}

};

// end of template

void solve() {
  int n; string t; cin >> n >> t;

  vector<int> anss;
  int ans = 0;
  for(int ik = 0; ik < n; ik++) {
    string s; cin >> s;
    int i = 0, j = 0, num_diff = 0;
    while(i != t.length() && j != s.length()) {
      if(t[i] != s[j]) {
        num_diff++;
        if(s.length() > t.length()) {
          j++;
          continue;
        }
        if(s.length() < t.length()){
          i++; 
          continue;
        }
      }
      if(num_diff > 1) break;
      i++, j++;
    }
    if(num_diff < 2 && abs((int)s.length() - (int)t.length()) <= 1) {
      anss.push_back(ik + 1);
      ans++;
    }
  }
  cout << ans << endl;
  for(int x : anss) cout << x << " ";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

