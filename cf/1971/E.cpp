// bad problem
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
  int tt; cin >> tt;
  while(tt--){
    // printf("tt %d\n", tt);
    ll n,k,q; cin >> n >> k >> q;
    vector<ll> time(k + 1), dist(k + 1);
    time[0] = dist[0] = 0;
    for(int i = 0; i < k; i++) {
      cin >> dist[i + 1];
    }

    for(int i = 0; i < k; i++) {
      ll x; cin >> x;
      time[i + 1] = x;
    }

    // printf("distances: \n");
    // for(auto x : dist) cout << x << " ";
    // printf("\ntimes: \n");
    // for(auto x : time) cout << x << " ";
    // cout << endl;

    for(int i = 0; i < q; i++) {
      ll qc; cin >> qc;
      auto lb = lower_bound(dist.begin(), dist.end(), qc);
      // if(lb == dist.begin()) {
      //   cout << 0 << " ";
      //   continue;
      // }
      if(dist[lb - dist.begin()] == qc) {
        cout << time[lb - dist.begin()] << " ";
        continue;
      }
      int pos = ((--lb) - dist.begin());
      // // printf("query: %lld\n", qc);
      // if(pos >= 0) printf("index on start counting: %d (+pdist: %lld, +ptime: %lld)\n", pos, dist[pos], time[pos]);
      // else {
      //   printf("QUERYING ON BEGIN, NOT DOING CALCULATION!\n");
      //   printf("index on start counting: %d\n\n", pos);
      //   continue;
      // }
      //
      // printf("spd: %f, dist required: %lld\n", spd, qc);
      // printf("dist required(%lld) / spd(%f): %f\n",(dist[pos + 1] - dist[pos]), spd,  double(qc) / spd);
      // printf("time passed before(%lld) + time required(%f): %f\n", time[pos], double(qc) / spd, time[pos] + double(qc) / spd);
      // printf("\nqc: %lld\nspd %lld\n", qc, spd);

      // ll spd = (dist[pos + 1] - dist[pos]) / (time[pos + 1] - time[pos]);
      // cout << (time[pos] + (qc / spd)) << " ";
      qc -= dist[pos];
      ll ans = time[pos] + (qc * ((time[pos + 1] - time[pos]) / (dist[pos + 1] - dist[pos])));
      // lesson learned: do division last in order to make sure floor 
      cout << ans << " ";
      // cout << endl;
    }
    cout << endl;
  }
}
