#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m; cin >> n >> m;
  map<int,vector<int>> mp;
  for(int i = 0; i < m; i++) {
    int a,b; cin >> a >> b;
    mp[a].push_back(b);
    mp[b].push_back(a);
  }

  int em = 0;
  set<int> st;
  for(int i = 1; i <= n; i++) {
    if(mp[i].size() == 0) {
      st.insert(i);
      em++;
    }
  }

  auto tr = [&](int s, auto& t_r) {
    if(st.find(s) != st.end()) return;
    st.insert(s);
    for(auto x : mp[s]) t_r(x, t_r);
  };

  int ans = 0;
  for(int i = 1; i <= n; i++) {
    if(st.find(i) == st.end()) ans++;
    tr(i, tr);
  }

  cout << max(1, ans + (em > 1)) << endl;
}
