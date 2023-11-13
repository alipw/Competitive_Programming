#include <bits/stdc++.h>
#include <queue>
#include <utility>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define i64 long long int
#define umap unordered_map
#define uset unordered_set
#define mst multiset
#define umst unordered_multiset
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
  cout << endl;
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
  int n; cin >> n;
  vector<int> a(n);
  for(int &x : a) cin >> x;
  sort(all(a));
  int i = 0, j = n - 1;
  for(int i = 0; i < n ; i++) {
    int n; cin >> n;
  }

  ll counter = 0, ans = 0;
  for(i = 0; i < j;) {
    if(counter + a[i] < a[j]) {
      counter += a[i];
      i++;
    } else {
      a[i] -= a[j] - counter;
      ans += a[j] + 1;
      counter = 0;
      j--;
    }
  }
  if(a[j] != 0) {
    if(counter + a[j] == 1)  ans += 1;
    else ans += (counter + a[j]) / 2 + 1 + ((counter + a[j]) % 2);
  }

  cout << ans;
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
