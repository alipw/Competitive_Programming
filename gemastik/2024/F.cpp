#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll n,p,q; cin >> n >> p >> q;
  for(int i = 0; i < n; i++) {
    ll z; cin >> z;
    while(z > 2) {
      __int128 dist_2, dist_3, dist_0;
      dist_0 = z;
      dist_2 = (z % 2) * p;
      dist_3 = (z % 3) * q;

      if(dist_0 <= dist_3 && dist_0 <= dist_2) {
      }
    }
  }
}
