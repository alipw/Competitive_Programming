#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--){
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;

    int f = 0, s = 0, ps = 0, ng = 0;
    for(int i = 0; i < n; i++) {
      f += (a[i] > b[i]) * a[i];
      s += (a[i] < b[i]) * b[i];
      ps += a[i] == b[i] && a[i] > 0;
      ng += a[i] == b[i] && a[i] < 0;
    }
    f += ps;
    s -= ng;

    int ans = INT_MIN;
    ans = max(ans, min(f, s));
    for(int i = 0; i < ps + ng; i++) {
      f--, s++;
      ans = max(ans, min(f, s));
    }

    cout << ans << endl;
  }
}
