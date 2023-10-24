#include <bits/stdc++.h>
#include <climits>
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


vector<int> a;
const int maxN = 10e6 + 1;
uint dp[maxN];

int solve(int x) {
    for(int w = 1; w <= x; w++) {
        for(const int coin : a) {
            if(w - coin >= 0) dp[w] = min(dp[w], dp[w - coin] + 1);
        }
    }
    return dp[x];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,x; cin >> n >> x;
    for(int i = 0; i < n; i++) {
        int z; cin >> z;
        a.push_back(z);
    }
    for(int i = 0; i < maxN; i++) dp[i] = INT_MAX;
    dp[0] = 0;
    uint ans = solve(x);
    if(ans >= INT_MAX) cout << -1;
    else cout << ans;
    
    return 0;
}
