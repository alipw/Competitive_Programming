#include <bits/stdc++.h>
using namespace std;

#define ll long long

// what the fuck?
// i am really fucking stupid
int main() {
  ll a,b,c,d,ans = 0;
  cin >> a >> b >> c >> d;
  if(b == 0 && c == 0) {
    ll z = a + d;
    ans += z / 3;
    ans += z % 3 != 0;
  }
  else if(b == 0) { 
    ll z = a + c;
    ans += z / 3;
    ans += z % 3 != 0;
    ans += d / 3;
    ans += d % 3 != 0;
  }
  else if(c == 0) {
    ll z = b + d;
    ans += z / 3;
    ans += z % 3 != 0;
    ans += a / 3;
    ans += a % 3 != 0;
  } else {
    ll z = b + c;
    ans += a / 3;
    ans += a % 3 != 0;
    ans += z / 3;
    ans += z % 3 != 0;
    ans += d / 3;
    ans += d % 3 != 0;
  }

  cout << ans << endl;
}
