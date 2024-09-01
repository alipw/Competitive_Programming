#include<bits/stdc++.h>
using namespace std;

int ans = 0;
vector<int> a;
void solve(int index, int prev) {
  if(index == a.size()) return;
  if(prev == 0) solve(index + 1, a[index]), ans += a[index] == 1;
  else {
    int gc = __gcd(prev, a[index]);
    if(gc == 1) ans++;
    solve(index + 1, gc);
  }
  solve(index + 1, prev);
}

int main() {
  int n; cin >> n;
  a.resize(n);
  for(auto &x : a) cin >> x;
  solve(1, 0);
  solve(1, a[0]);
  if(a[0] == 1) ans++;
  cout << ans << endl;
  return 0;
}
