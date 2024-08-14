#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m; cin >> n >> m;

  // for each input of k, we essentially creates a island of fully connected vertices
  // so from each bubble, we need to
  // 1. check if all bubble are connected
  // 2. since each vertices can have more than one bubble it belongs to, we need to choose the smallest bubbles first
  //
  // idea: 
  // group by distance size
  // insert it into a set
  // then iterate it by the smallest distance size
  // add all of those elements 
  // union those sets, keep track which is the smallest and which are the largest
  // we can do it in o(n) where n is the sum(set island)
  // n <= 4*10^5 - absolutely doable
  // total complexity = O(n log n)
  // i need to do whether there is any connection between one island and another
  
  map<long long, set<int>> mp;

  for(int i = 0; i < m; i++) {
    long long k,c; cin >> k >> c;
    for(int j = 0; j < k; j++) {
      int x; cin >> x;
      mp[c].insert(x);
    }
  }

  set<int> s;
  long long ans = 0;

  for(auto se : mp) {
    long long ne = 0;
    printf("c: %lld\n", se.first);
    for(auto x : se.second) cout << x << " ";
    cout << endl;

    for(auto x : se.second) {
      if(s.find(x) == s.end()) {
        ne++;
      }
      s.insert(x);
    }
    printf("ne: %lld\n\n", ne);
    ne = ne - 1 + (ne == 1);
    if(ne > 0) ans += ne * se.first;
  }
  if(s.size() != n) {
    cout << -1;
    return 0;
  }

  cout << ans << endl;
}
