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
    cout << var[i] << (i == var.size() - 1 ? "" : ", ");{}
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
  string s; cin >> s;
  int64_t pos; cin >> pos;
  int64_t n = s.length(), step_req = 0;
  vector<bool> deleted(n);

  while(pos > n) {
    pos -= n;
    step_req++;
    n--;
  }
  pos--;
  // debug(pos);
  // debug(step_req);

  stack<pair<char, int>> chars;
  for(int i = 0; i < s.length() && step_req > 0; i++) {
    while(!chars.empty() && chars.top().first > s[i] && step_req > 0) {
      step_req--;
      deleted[chars.top().second] = true;
      chars.pop();
    }

    chars.push(make_pair(s[i], i));
  }

  for(int i = s.length() - 1; i >= 0 && step_req > 0; i--) {
    if(!deleted[i]) {
      deleted[i] = true;
      step_req--;
    }
  }

  int j = 0;
  for(int i = 0; i < s.length(); i++) {
    if(j == pos && !deleted[i]) {
      cout << s[i]; 
      return;
    } 

    if(!deleted[i]) j++;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int TEST_CASE;
  cin >> TEST_CASE;
  while (TEST_CASE--) solve();
  return 0;
}
