#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,k; cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    a[i] = x;
  }

  vector<pair<int,int>> g(n);
  for(int i = 0; i < n; i++) {
    g[i].first = a[i];
    g[i].second = i;
  }

  sort(g.begin(), g.end());

  set<int> s;
  int ans = INT_MAX;
  for(int i = 0; i < n; i++) {
    if(i - k >= 0) {
      ans = min(ans,*(--s.end()) - *s.begin());
      s.erase(g[i - k].second);
    }
    s.insert(g[i].second);
  }
  ans = min(ans,*(--s.end()) - *s.begin());

  cout << ans << endl;
}
