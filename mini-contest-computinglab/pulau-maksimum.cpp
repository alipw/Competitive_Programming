#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ll n, m, ans = 0; cin >> n >> m;
  map<int, vector<int>> g;
  vector<ll> v(n + 1), vs(n + 1, 0), vss(n + 1, 0);
  for(int i = 0; i < m; i++) {
    int a,b; cin >> a >> b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  for(int i = 0; i < n; i++) {
    ll x; cin >> x;
    v[i + 1] = x;
  }

  auto dfsc = [&](int st, auto&& t_r) {
    if(vs[st]) return 0LL;
    vs[st] = 1;
    ll mxc = 0;
    for(auto x : g[st]) mxc = max(t_r(x, t_r), mxc);
    return mxc + v[st];
  };
  
  auto trav = [&](int st, auto&& t_r) {
    if(vss[st]) return INT_MAX;
    vss[st] = 1;
    int anz = st;
    for(int x : g[st]) anz = min(anz, t_r(x, t_r));
    return anz;
  };

  set<int> stt;
  for(int i = 1; i <= n; i++) {
    ll tss = trav(i, trav);
    if(tss != INT_MAX) stt.insert(tss);
  }

  for(auto i : stt) ans += dfsc(i, dfsc);
  cout << ans << endl;

}
