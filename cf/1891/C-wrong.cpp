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
  priority_queue<int> pq;
  for(int &x : a) {
    cin >> x;
    pq.push(x);
  }
 
  if(n == 1) {
    if(a[0] == 1) cout << 1;
    else cout << a[0] / 2 + 1 + (a[0] % 2);
    return;
  }
  sort(all(a));
 
  ll sum = 0, ans = 0, i = 0;
  vector<pair<ll,ll>> vp;
 
  for(i = 0; i < pq.size(); i++) {
    if(sum + a[i] > pq.top() && i < pq.size()) {
      vp.push_back(make_pair(sum, pq.top()));
      sum = 0;
      pq.pop();
    }
    sum += a[i];
  }
 
  if(i == pq.size()) {
    if(a[i - 1] != 1) ans += (a[i] / 2) + (1 + (a[i] % 2));
    else ans++;
  }
  debug(ans);
  debug(a);

  for(auto p : vp) {
    debug(p.first + p.second);
    debug(( p.first + p.second ) / 2);
    ans += (p.first + p.second) / 2 + 1 + (( p.first + p.second ) % 2);
  }

  debug(ans);
  debug(vp);
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
