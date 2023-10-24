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
template <typename T, typename S> void DEBUG_PRINTER(vector<pair<T, S>> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i].first << " -> " << var[i].second
         << (i == var.size() - 1 ? "" : endl);
}
template <typename T, typename S> void DEBUG_PRINTER(umap<T, S> var) {
  cout << endl;
  for (auto &it : var)
    cout << it.first << " -> " << it.second << endl;
}
template <typename T, typename S> void DEBUG_PRINTER(map<T, S> var) {
  cout << endl;
  for (auto &it : var)
    cout << it.first << " -> " << it.second << endl;
}
// end of template

void solve() {
  int n, k = 0;
  cin >> n;
  vector<pair<long long, long long>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }
  sort(all(a));
  if (n == 1) {
    cout << 1 << endl << 1;
    return;
  }
  if (a[0].first < a[1].first) {
    k = 1;
  }
  for (int i = 1; i < n; i++) {
    a[i].first = a[i].first + a[i - 1].first;
    if (i < n - 1 && a[i].first < a[i + 1].first) {
      k = i + 1;
    }
  }
  vector<long long> ans;
  for (int i = n - 1; i >= k; i--) {
    ans.push_back(a[i].second);
  }
  sort(all(ans));
  cout << ans.size() << endl;
  for (auto i : ans)
    cout << i << " ";
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

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	solve();
// 	return 0;
// }

// int main(){
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);
// 	int TEST_CASE:
// 	cin >> TEST_CASE;
// 	for(int i = 1; i <= TEST_CASE; i++){
// 		cout << "CASE #" << i << endl;
// 		solve();
// 		cout << endl;
// 	}
// 	return 0;
// }
