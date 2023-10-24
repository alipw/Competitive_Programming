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
  int n, m;  cin >> n >> m;
  vector<int> scores(m); for(int &x : scores) cin >> x;
  vector<string> solved(n); for(string &x : solved) cin >> x;
  map<int, vector<int>> unsolved;
  vector<int> scr(n);

  for(int i = 0; i < n; i++) {
    int csr = 0;
    for(int j = 0; j < m; j++) {
      char c = solved[i][j];
      if(c == 'x') unsolved[i].push_back(scores[j]);
      else csr += scores[j];
    }
    sort(rall(unsolved[i]));
    scr[i] = csr + i;
  }

  for(int i = 0; i < n; i++) {
    int max_scr = INT_MIN;
    for(int j = 0; j < n; j++) {
      if(j == i) continue;
      max_scr = max(max_scr, scr[j]);
    }

    int j = 0;
    int curscr = scr[i];
    while(max_scr >= curscr) {
      curscr += unsolved[i][j];
      j++;
    }
    cout << j << endl;
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
