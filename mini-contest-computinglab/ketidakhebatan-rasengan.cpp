#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
  int tt; cin >> tt;
  while(tt--) {
    ll mn = 1, mx = 1414213562 + 100, mid = (mn + mx) / 2, x, ans = LLONG_MAX;
    cin >> x;
    while(mn < mx) {
      if((mid * (mid + 1)) / 2 >= x) {
        ans = min(ans, mid);
        mx = mid - 1;
      } else {
        mn = mid + 1;
      }
      mid = (mn + mx) / 2;
    }
    if((mid * (mid + 1)) / 2 >= x) ans = min(ans, mid);
    cout << ans << endl;
  }
}
