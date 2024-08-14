#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if (b == 0 && c == 0) {
    cout << (a + d) / 3 + ((a + d) % 3 != 0);
  } else if (b == 0) {
    cout << ((a + c) / 3 + ((a + c) % 3 != 0)) + (d / 3 + (d % 3 != 0));
  } else if (c == 0) {
    cout << (a / 3 + (a % 3 != 0)) + ((b + d) / 3 + ((b + d) % 3 != 0));
  } else {
    cout << (a / 3 + (a % 3 != 0)) + (( b + c ) / 3 + ((b + c) % 3 != 0)) + (d / 3 + (d % 3 != 0));
  }
  cout << endl;
}
