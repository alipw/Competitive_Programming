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

int sl(string s) {
  int tl = 0; for(char &c : s) tl += c - '0';
  return tl;
}

void solve() {
  int n; cin >> n;
  vector<string> a(n);
  for(string &x : a) cin >> x;
  int cnt[6][46]; memset(cnt, 0, sizeof(cnt));
  for(string &s : a) cnt[s.length()][sl(s)]++;

  ll ans = 0;
  for(string &s : a){
    for(int i = s.length(); i > 0; i--) {
      string l = s.substr(0, i), r = s.substr(i, s.length());
      if(l.length() > r.length()) {
        int req = l.length() - r.length(), reqs = sl(l) - sl(r);
        if(reqs > 0) ans += cnt[req][reqs];
      } else if(l.length() < r.length()) {
        int req = r.length() - l.length(), reqs = sl(r) - sl(l);
        if(reqs > 0) ans += cnt[req][reqs];
      }
    }
  }
  cout << ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

