#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    string tmp; cin >> tmp;
    vector<bool> v, vv;

    for(auto x : tmp) v.push_back(x - '0');

    vv = v;
    for(int k = n; k >= 1; k--) {
      int cnt = 0;
      int m[n + 1]; memset(m, 0, sizeof(m));
      for(int i = 0; i < n; i++) {
        cnt -= m[i];
        if(cnt % 2) v[i] = !v[i];
        if(v[i] == 0 && i + k <= n) {
          m[i + k]--;
          v[i] = 1;
          cnt++;
        }
      }

      bool ok = true;
      for(auto x : v) ok = ok && x;
      if(ok) {
        cout << k << endl;
        goto next;
      }

      v = vv;
    }
  next:
    continue;
  }
}
