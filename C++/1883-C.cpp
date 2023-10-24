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

// end of template

void solve() {
  // solve for the each 5 cases
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;

  if (k != 4) { // case if k is prime
    int ans = INT_MAX;
    for (int x : a) {
      int mul = (x / k) + (x % k != 0);
      ans = min(ans, mul * k - x);
    }
    cout << ans;
  } else { // check for two things 
    int ans = INT_MAX;
    int oc = 0, ec = 0;
    for (int x : a) {
      oc += (x % 2 == 1);
      ec += (x % 2 == 0);
      int mul = (x / k) + (x % k != 0);
      ans = min(ans, mul * k - x);
    }

    if(ec >= 2) ans = 0; // two elements are even, nothing to do
    else if(ec == 1 && oc >= 1) ans = min(ans, 1); // two elements, only one even, add 1 to any odd number
    else if(ec == 0 && oc > 1)  ans = min(ans, 2); // two elements, none are even, add 1 to any two distinct odd number
    cout << ans;
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
