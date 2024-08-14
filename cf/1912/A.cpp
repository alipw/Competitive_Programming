#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  ll x,k; cin >> x >> k;
  vector<queue<ll>> ps(k);
  vector<ll> req(k, 0);
  for(int i = 0; i < k; i++) {
    int n; cin >> n;
    for(int j = 0; j < n; j++) {
      ll x; cin >> x;
      ps[i].push(x);
    }
  }

  ll ans = x;
  bool all_done = 1;
  for(int i = 0; 1 ; i++) {
    if(i >= k) i = 0;
    if(i == 0) all_done = 1;
    all_done = all_done && (req[i] > x || ps[i].size() == 0);
    if(i == k - 1 && all_done) break;
    if(ps[i].size() == 0) continue;

    // printf("index: %d\nxbefore=%lld\n", i, x);
    if(ps[i].front() < 0) {
      req[i] += abs(ps[i].front());
      // printf("adding to req: %lld\n", ps[i].front());
      ps[i].pop();
    } else {
      // if we can add then we add, but only if the current sum is greater than the last
      if(ps[i].front() < req[i]) {
        // printf("not adding to value because req[i](%lld) > ps[i].front()(%lld)\n", req[i], ps[i].front());
        ll tmp = ps[i].front();
        ps[i].pop();
        if(ps[i].size() != 0) ps[i].front() += tmp;
      } else if(req[i] <= x){
        x += ps[i].front() - req[i], ps[i].pop(), req[i] = 0;
        // printf("adding %lld from %d\n", ps[i].front() - req[i], i);
      }
      // case when we always add if we can no matter if it reduces or not
      // if(req[i] <= x) x += ps[i].front() - req[i], ps[i].pop(), req[i] = 0;
      // case when we only pick up when it's positive
      // if(ps[i].front() > req[i] && req[i] <= x) x += ps[i].front() - req[i], ps[i].pop(), req[i] = 0;
    }
    // printf("index: %d\nxafter=%lld\n", i, x);
    // printf("\n\n");

    // printf("idx: %d\nps[i].size(): %lld\nreq[i]: %lld\n\n", i, ps[i].size(), req[i]);
  }

  cout << x << endl;
}
