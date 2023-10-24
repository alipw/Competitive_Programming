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
    cout << "]\n";                                                             \ }
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
    double n; cin >> n;
    double x, sum;
    bool found = false;
    for(int i = 0; i < n; i++) {
        cin >> x;
        sum += x;
        if(x < 50.0) {
            found = true;
        }
    }

    sum /= n;

    if(!found){
        if(sum >= 85 && sum <= 100) {
            cout << "A" << endl;
        } else if (sum  >= 80 && sum < 85) {
            cout << "A-" << endl;
        } else if (sum  >= 75 && sum < 80) {
            cout << "B+" << endl;
        } else if (sum  >= 70 && sum < 75) {
            cout << "B" << endl;
        } else if (sum  >= 65 && sum < 70) {
            cout << "B-" << endl;
        } else if (sum  >= 60 && sum < 65) {
            cout << "C+" << endl;
        } else if (sum  >= 55 && sum < 60) {
            cout << "C" << endl;
        } else if (sum  >= 50 && sum < 55) {
            cout << "C-" << endl;
        } else if (sum  >= 40 && sum < 50) {
            cout << "D" << endl;
        } else cout << "F" << endl;
    } else  {
        if (sum >= 40) {
            cout << "D" << endl;
        } else cout << "F" << endl;
    }

}


int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
  return 0;
}

