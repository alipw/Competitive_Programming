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

int64_t f(int64_t x) {
    int64_t ans = 1;
    for(int i = 1; i <= x; i++) ans *= i;
    return ans;
}

int64_t perm(string s) {
    umap<char,int> mp;
    for(char c: s) mp[c]++;
    int64_t div = 1;
    for(auto i : mp) div *= f(i.second);
    debug(mp);
    return f(s.length()) / div;
}

vector<char> a;
umap<char, int> cnt;
string s;
void comb(int respi, int target, int left, string before = ""){
    if(left == 0){
        debug(before);
        return;
    };
    left -= cnt[respi];
    char respc = a[respi];
    int minpart = max(0, target - left); // minimum taking part
    debug(minpart);
    for(int j = cnt[respc]; j >= minpart; j--) {
        comb(respi + 1, target - j, left, before + to_string(j));
    }
}

umap<string, bool> computed;
void solve() {
    cin >> s;
    int ans = 0;
    string tmp = "";
    int n = s.length();
    for(auto c : s) cnt[c]++;
    for(auto p : cnt) a.push_back(p.first);

    debug(a);
    comb(0, 2, s.length());

    // for(int i = -1; i < n; i++) {
    //     if(i != -1) tmp += s[i];
    //
    //     for(int j = i; j < n; j++) {
    //         if(j == i) continue;
    //         if(computed[tmp + s[j]]) continue;
    //         debug(tmp + s[j]);
    //         // debug(perm(tmp + s[j]));
    //         computed[tmp + s[j]] = true;
    //         ans += perm(tmp + s[j]);
    //     }
    // }
    // cout << ans;
    //

    // for(int i = 10; i >= 1; i--) {
    //     debug(i);
    //     debug(f(i));
    // }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}
