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
  for (auto it = var.rbegin(); it != var.rend(); it++, j++)
    cout << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}

// end of template
int64_t f(int64_t x) {
    int64_t ans = 1;
    for(int i = 1; i <= x; i++) ans *= i;
    return ans;
}

umap<char, int> charset;
vector<char> unique_chars;
map<char, int> sumlayout;
string s; 
int ans = 0;

int64_t perm(int len) {
    int64_t div = 1;
    for(auto i : sumlayout) div *= f(i.second);
    return f(len) / div;
}

void genComb(char curIdx, int targetSum, int otherLeft, const int targetog){

    if(curIdx == unique_chars.size()) {
        // debug(sumlayout);
        // debug(perm(targetog));
        ans += perm(targetog);
        return;
    };

    char curchar = unique_chars[curIdx];
    int curCount = charset[curchar];
    otherLeft -= curCount;

    int up = min(targetSum, curCount);
    int dn = max(targetSum - otherLeft, 0);

    for(int i = dn; i <= up; i++) {
        sumlayout[curchar] = i;
        genComb(curIdx + 1, targetSum - i, otherLeft, targetog);
    }
}

void solve() {
    cin >> s;
    int n = s.length();

    for(char c : s) charset[c]++;
    for(auto i : charset) unique_chars.push_back(i.first);

    for(int i = 1; i <= int(s.length()); i++) {
        genComb(0, i, s.length(), i);
    }
    cout << ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

