#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int n; cin >> n;
  vector<ll> a(n), b(n);
  for(auto &x : a) cin >> x;
  for(auto &x : b) cin >> x;

  ll ans = 0;
  multiset<ll> ms;
  for(int i = 2; i < n; i++) ms.insert(b[i]);
  for(int i = 0; i < n - 2; i++) {
    ans = max(ans,*(ms.rbegin()) - a[i]);
    ms.erase(ms.lower_bound(b[i + 2]));
  }

  if(ans == 0) cout << "tidak mungkin";
  else cout << ans;
  cout << endl;
}
