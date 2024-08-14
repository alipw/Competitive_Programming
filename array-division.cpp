#include<bits/stdc++.h>
using namespace std;

#define ll int64_t

vector<ll> a;
bool ok(ll x, ll k) {
  ll n = a.size();
  ll sz = 1, cr = 0;
  for(int i = 0; i < n; i++) {
    cr += a[i];
    if(cr > x) sz++, cr = a[i];
    if(a[i] > x) return 0;
  }
  if(cr > x) sz++; 
  if(sz > k) return 0;
  else return 1;
}

int main(){
  ll n, k; 
  cin >> n >> k;
  a.resize(n);

  ll l,r = 0; 
  for(auto &x : a) {
    cin >> x;
    r += x;
  }

  l = r / n;
  ll t = (l + r) / 2;
  bool fin = 0;
  ll ans = r;
  while(l <= r) {
    if(ok(t, k)) {
      r = t - 1;
      ans = t;
    } else {
      l = t + 1;
    }
    t = (l + r) / 2;
  }
  if(ok(t, k)) {
    ans = t;
  }

  cout << ans << endl;
}
