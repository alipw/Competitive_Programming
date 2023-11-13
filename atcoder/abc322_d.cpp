#include <bits/stdc++.h>
#include <cstdio>
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

// end of template
void show(vector<vector<char>> x) {
  for (int i = 0; i < x.size(); i++) {
    for (int j = 0; j < x[i].size(); j++)
      cout << x[i][j] << " ";
    cout << endl;
  }
}

// can only rotate square vectors
void rot90clockwise(vector<vector<char>> &v) {
  vector<vector<char>> rotated = v;
  for (int col = 0; col < v.size(); col++) {
    for (int row = 0; row < v.size(); row++) {
      rotated[col][v.size() - 1 - row] = v[row][col];
    }
  }
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++)
      v[i][j] = rotated[i][j];
  }
}

// translate the '#', fill the blanks with '.'
vector<vector<char>> translate(vector<vector<char>> v, int x, int y) {
  vector<vector<char>> translated = v;
  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      if (j - x < 0 || i - y < 0 || j - x >= v.size() || i - y >= v.size())
        translated[i][j] = '.';
      else
        translated[i][j] = v[i - y][j - x];
    }
  }

  return translated;
}

bool ok_translate(vector<vector<char>> v, vector<vector<char>> translated) {
  umap<char, int> mp1;
  umap<char, int> mp2;

  for (int i = 0; i < v.size(); i++) {
    for (int j = 0; j < v.size(); j++) {
      mp1[v[i][j]]++;
      mp2[translated[i][j]]++;
    }
  }

  for (auto it : mp1)
    if (mp1[it.first] != mp2[it.first])
      return false;
  return true;
}

bool grid_filled(vector<vector<vector<char>>> &pl) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int ok_cnt = 0;
      ok_cnt += pl[0][i][j] == '#';
      ok_cnt += pl[1][i][j] == '#';
      ok_cnt += pl[2][i][j] == '#';

      if (ok_cnt != 1)
        return false;
    }
  }

  return true;
}

void solve() {
  vector<vector<vector<char>>> pl(3, vector<vector<char>>(4, vector<char>(4)));

  int pc = 0;
  for (int m = 0; m < 3; m++) {
    for (int i = 0; i < 4; i++) {
      string s;
      cin >> s;
      for (int j = 0; j < 4; j++) {
        pl[m][i][j] = s[j];
        pc += s[j] == '#';
      }
    }
  }

  if(pc != 16) {
    cout << "No" << endl;
    return;
  }

  // try 3 rotations for pl[1]
  for (int i = 0; i < 4; i++) {

    // try 3 rotations for pl[2]
    for (int j = 0; j < 4; j++) {

      // try all possible 36 translations for pl[0]
      for (int tx0 = -3; tx0 <= 3; tx0++) {
        for (int ty0 = -3; ty0 <= 3; ty0++) {
          auto tr0 = translate(pl[0], tx0, ty0);
          if (!ok_translate(pl[0], tr0))
            continue;

          // try all possible 36 translations for pl[1]
          for (int tx1 = -3; tx1 <= 3; tx1++) {
            for (int ty1 = -3; ty1 <= 3; ty1++) {
              auto tr1 = translate(pl[1], tx1, ty1);
              if (!ok_translate(pl[1], tr1))
                continue;

              // try all possible 36 translations for pl[2]
              for (int tx2 = -3; tx2 <= 3; tx2++) {
                for (int ty2 = -3; ty2 <= 3; ty2++) {
                  auto tr2 = translate(pl[2], tx2, ty2);
                  if (!ok_translate(pl[2], tr2))
                    continue;

                  vector<vector<vector<char>>> pl_cpy = pl;
                  pl_cpy[0] = tr0;
                  pl_cpy[1] = tr1;
                  pl_cpy[2] = tr2;
                  if(grid_filled(pl_cpy)) {
                    cout << "Yes" << endl;
                    return;
                  }
                }
              }
            }
          }
        }
      }
      rot90clockwise(pl[2]);
    }
    rot90clockwise(pl[1]);
  }

  cout << "No" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
