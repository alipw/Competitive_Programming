#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<vector<int>> a(n + 1, vector<int>(n + 1)), vs(n + 1, vector<int> (n + 1));

  auto dfs = [&](int x, int y, auto&& t_r) {
    if(vs[x][y] || a[x][y] != 1) return;
    vs[x][y] = 1;
    if(x > 0) t_r(x - 1, y, t_r);
    if(y > 0) t_r(x, y - 1, t_r);
    if(x < n) t_r(x + 1, y, t_r);
    if(y < n) t_r(x, y + 1, t_r);
  };

  pair<int,int> st;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      char c; cin >> c;
      if(c == 'S') st = {i, j}, a[i][j] = 1;
      else if(c == 'e') a[i][j] = 1;
      else if(c == '-') a[i][j] = 0;
    }
  }
  dfs(st.first, st.second, dfs);

  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(vs[i][j]) cout << '-';
      else cout << (a[i][j] == 0 ? '-' : 'e');
      cout << " ";
    }
    cout << endl;
  }

}
