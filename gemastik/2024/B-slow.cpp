#include<bits/stdc++.h>
using namespace std;
#define ll long long

// this should NOT get accepted
int main(){
  ll q,l; cin >> q >> l;
  vector<ll> a; a.
  a.push_back(l);
  while(q--) {
    int x; cin >> x; x--;
    a.insert(a.begin() + x + 1, a[x] / 2);
    a[x] /= 2;
  }
  for(auto x : a) cout << x << " ";
}
