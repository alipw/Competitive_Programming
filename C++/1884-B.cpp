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

inline int find_after(string &s, int index, const char target) {
  int i = index;
  while(i < s.length() && s[i] != target) 
    i++;

  return i;
}

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  reverse(all(s));
  vector<int64_t> a(n);


  for(int i = 0, j = 0; i < n; i++) { 
    // i looks for '1'
    // j looks for '0'
    if(s[i] == '1') {
      if (j < i) j = i + 1;
      while(j < n && s[j] != '0') j++; // search for the closet j 
      if(j == s.length()) { // means no '0' is found, but we have another 1
        for(int l = i; l < n; l++) {
          a[l] = -1;
        }
        break;
      } else {
        a[i] = j - i;
        if(i != 0) a[i] += a[i - 1];
        s[i] = '0';
        s[j] = '1';
      }
    }
  }

  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
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

