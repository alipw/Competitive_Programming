#include <bits/stdc++.h>
using namespace std;

// let's formulate the brute force solution first
// then and only then, we can start to optimize it
// i'm doing this to improve my mental capacity
int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxx = -1;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      maxx = max(a[i], maxx);
    }

    int ans = 0;
    for (int k = 1; k <= n; k++) {

      bool found = false;
      bool allallsame = true;
      if (n % k != 0)
        continue; // if k is not a divisor of n
      //

      for (int b = 0; b < k && allallsame; b++) {
        bool allsame = true;
        for (int i = 0; i < n && allsame; i += n / k) {
          allsame = allsame && a[b] == a[i + b];
        }
        allallsame = allsame && allallsame;
      }

      found = found || allallsame;

      for (int m = 2; m <= maxx && !found; m++) {

        for (int b = 0; b < k && allallsame; b++) {
          bool allsame = true;
          for (int i = 0; i < n && allsame; i += n / k) {
            allsame = allsame && (a[b] % m) == (a[i + b] % m);
          }
          allallsame = allsame && allallsame;
        }
        found = found || allallsame;
      }

      ans += found;
    }
    cout << ans << endl;
  }
}
