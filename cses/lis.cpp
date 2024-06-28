#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(auto &x : a) cin >> x;
  vector<int> dp;
  for(auto x : a) {
    auto pos = lower_bound(dp.begin(), dp.end(), x);
    if(pos == dp.end()) {
      dp.push_back(x);
    } else {
      *pos = x;
    }
  }
  cout << dp.size() << endl;;
}
