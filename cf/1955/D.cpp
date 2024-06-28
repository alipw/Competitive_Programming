#include<bits/stdc++.h>
using namespace std;

// o(n) checking of ok array
bool is_ok(vector<int> &b, vector<int> &c, int k){
  map<int,int> mpb, mpc;
  int cnt = 0;
  for(auto x : b) mpb[x]++;
  for(auto x : c) {
    cnt += mpb[x] > mpc[x];
    mpc[x]++;
  }
  return cnt >= k;
}

int main(){
  int tt; cin >> tt;
  while(tt--){
    int n,m,k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);

    int ans = 0;
    map<int,int> mpb, mpc;
    for(auto &x : a) cin >> x;
    for(auto &x : b) {
      cin >> x;
      mpb[x]++;
    }

    std::span c{a.begin(), a.begin() + m};
    int cnt = 0;
    for(auto x : c) {
      cnt += mpb[x] > mpc[x];
      mpc[x]++;
    }
    ans += cnt >= k;

    for(int i = 1; i < n - m + 1; i++){
      int &x = c[0];
      cnt -= mpc[x] <= mpb[x];
      mpc[x]--;
      c = std::span{a.begin() + i, a.begin() + i + m};
      x = c[c.size() - 1];
      cnt += mpb[x] > mpc[x];
      mpc[x]++;
      ans += cnt >= k;
    }
    cout << ans << endl;
  }
}
