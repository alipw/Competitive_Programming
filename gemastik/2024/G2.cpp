#include<bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, ans = -1; cin >> n;
  vector<int> a(n), b(n);
  for(auto &x : a) cin >> x;
  for(auto &x : b) cin >> x;
  for(int i = n - 2; i >= 0; i--) b[i] = max(b[i + 1], b[i]);
  for(int i = 0; i < n - 2; i++) ans = max(ans, b[i + 2] - a[i]);
  if(ans > 0) cout << ans;
  else cout << "tidak mungkin";
}
