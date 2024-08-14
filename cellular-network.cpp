#include<bits/stdc++.h>
using namespace std;

#define ll int64_t
#define all(a) a.begin(), a.end()

ll closest(vector<ll> &a, ll t) {
  auto pos = lower_bound(all(a), t);
  if(pos == a.begin()) return *pos;
  if(pos == a.end()) return *(--pos);
  ll gt = *pos, ls = *(--pos);
  if(abs(gt - t) > abs(ls - t)) return ls;
  else return gt;
}

vector<ll> hos, nts;
bool check(ll r) {
  // check if all houses have network
  // fast way to checK: lower bound 
  for(auto ho : hos){
    if(abs(closest(nts, ho) - ho) > r) {
      return 0;
    }
  } 

  return 1;
}

int main(){
  int n, m; cin >> n >> m;
  hos.resize(n);
  nts.resize(m);

  for(auto &ho : hos) cin >> ho;
  for(auto &nt : nts) cin >> nt;

  ll l,r;
  l = 1, r = LLONG_MAX;
  ll t = (l + r) / 2, ans = r;

  while(l <= r) {
    if(check(t)) {
      r = t - 1;
      ans = t;
    } else {
      l = t + 1;
    }
    t = (l + r) / 2;
  }

  cout << ans << endl;
}
