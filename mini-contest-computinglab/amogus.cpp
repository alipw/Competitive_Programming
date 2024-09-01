#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n,k,ans = 0; cin >> n >> k; k--;
  vector<ll> a(n);
  for(auto &x : a) cin >> x;
  int i = k;
  while(--i && i > 0) {
    if(a[k] - a[i] < a[i] - a[i - 1]) ans++;
    else break;
  }
  ans += i == 0;
  i = k;
  while(++i && i < n - 1) {
    if(a[i] - a[k] < a[i + 1] - a[i]) ans++;
    else break;
  }
  ans += i == n - 1;
  cout << ans << endl;
}
