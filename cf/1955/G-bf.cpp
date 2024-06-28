#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<vector<int>> grid;
int maxgcd = 1;

void try_all_permutations(vector<int> steps_permutation, int l, int h) {
  if (l == h) {
    // semua permutasi ada disini
    int curgcd = grid[0][0];
    int posy = 0, posx = 0;
    for(auto x : steps_permutation) {
      if(x == 0) posy += 1;
      else posx += 1;
      curgcd = __gcd(curgcd, grid[posy][posx]);
    }
    maxgcd = max(maxgcd, curgcd);
    return;
  }

  for (int i = l; i <= h; i++) {
    swap(steps_permutation[l], steps_permutation[i]);
    try_all_permutations(steps_permutation, l + 1, h);
    swap(steps_permutation[l], steps_permutation[i]);
  }
}

int main(){
  cin >> n >> m;
  grid = vector<vector<int>> (n, vector<int> (m));

  // input nilai
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) cin >> grid[i][j];
  }

  // 0 kebawah, 1 kekanan
  vector<int> steps_list;
  for(int i = 0; i < n - 1; i++) steps_list.push_back(0);
  for(int i = 0; i < m - 1; i++) steps_list.push_back(1);

  try_all_permutations(steps_list, 0, steps_list.size() - 1);

  cout << maxgcd << endl;
}


