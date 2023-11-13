#include <bits/stdc++.h>
#include <climits>
#include <numeric>
using namespace std;

void debug(vector<int> a) {
  for (int x : a)
    cout << x << " ";
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int &x : a)
    cin >> x;
  debug(a);
  cout << INT_MAX;

  vector<int> dp;
  for (int x : a) {
    auto it = lower_bound(dp.begin(), dp.end(), x);
    if (it == dp.end()) {
      dp.push_back(x);
    } else {
      *it = x;
    }
    debug(dp);
  }
  cout << dp.size() << endl;
}
