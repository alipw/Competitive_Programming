#include <bits/stdc++.h>
#include <climits>
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
struct line {
  valarray<long double> e1 = {0, 0};
  valarray<long double> e2 = {0, 0};
  long double grad, len;
};

// a1, a2
// b1, b2

long double count_grad(line L) {
  if(L.e2[1] == L.e1[1]) return INT64_MAX;
  return (L.e2[1] - L.e1[1])/(L.e2[0] - L.e1[0]);
}

long double count_len(line L){
  return sqrt(pow(L.e1[0] - L.e2[0], 2) + pow(L.e1[1] - L.e2[1], 2));
}

void solve() {
  int n;
  cin >> n;
  set<pair<long double, long double>> st;
  vector<line> a(n);

  for(line &x : a) {
    // 1 denotes y, 0 denotes x
    cin >> x.e1[0] >> x.e1[1] >> x.e2[0] >> x.e2[1];
    x.grad = count_grad(x);
    x.len = count_len(x);
  }

  int ans = INT_MIN;
  for(int i = 0; i < n; i++) {
    auto il = a[i];
    for(int j = 0; j < n; j++) {
      if(i == j) continue;
      auto jl = a[j];
      if(il.grad == jl.grad) continue;
      // try the 4 different orientation that jl can join with il
      // ae1 be1
      // ae1 be2
      // ae2 be1
      // ae2 be2
      auto offset1 = (il.e1 - jl.e1);
      auto offset2 = (il.e2 - jl.e2);
      line moved;
      moved.e1 = jl.e1 + offset1;
      moved.e2 = jl.e2 + offset1;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
