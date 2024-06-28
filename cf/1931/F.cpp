#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> vmp(k);
    map<int, vector<int>> graph;

    for (int i = 0; i < k; i++) {
      for (int j = 0; j < n; j++) {
        int x;
        cin >> x;
        vmp[i].push_back(x);
      }
    }

    for (int i = 0; i < k; i++) {
      for (int j = 1; j + 1 < n; j++)
        graph[vmp[i][j]].push_back(vmp[i][j + 1]);
    }

    map<int, int> viscolor;
    bool cyc = false;
    vector<bool> visited(n);

    auto dfs = [&](int start) {
      auto dfs_impl = [&](int start, auto &dfs_ref) {
        if (viscolor[start] == 1)
          cyc = 1;
        if (visited[start])
          return;
        viscolor[start] = 1; // gray
        visited[start] = 1;
        for (auto x : graph[start])
          dfs_ref(x, dfs_ref);
        viscolor[start] = 0; // black
      };
      return dfs_impl(start, dfs_impl);
    };

    for (auto [k, v] : graph) {
      if (visited[k])
        continue;
      dfs(k);
      if (cyc) {
        cout << "NO\n";
        goto next;
      }
      viscolor.clear();
    }

    cout << "YES\n";

  next:
    continue;
  }
}
