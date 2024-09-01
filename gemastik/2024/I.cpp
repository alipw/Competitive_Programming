#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int n,q; cin >> n >> q;
  ll sm = 0;
  vector<ll> a(n), x(q), mm(n + 1, -1);
  for(auto &x : a) cin >> x, sm += x;
  for(auto &z : x) cin >> z;
  sort(a.begin(), a.end());
  for(auto x : x) {
    ll rd = 0;
    if(x > n) rd = 0;
    else if(mm[x] != -1) rd = mm[x];
    else {
      for(int i = n - x; i >= 0; i -= x) {
        rd += a[i] / 2;
      }
      mm[x] = rd;
    }
    cout << sm - rd << "\n";
  }
}

