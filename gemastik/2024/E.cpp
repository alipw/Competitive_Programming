#include<bits/stdc++.h>
using namespace std;

int dp[1001][1001], a[1001];
int sz;

int solve(int i, int j){
  if(dp[i][j]) return dp[i][j];
  else {
    int x = j + 1;
    while(x < sz && a[i] + a[j] > a[x]) x++;
    // return solve()
  }
}

int main(){
  memset(dp, 0, sizeof(dp));
  int n,k; cin >> n >> k;
  sz = n;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      dp[a[i]][a[j]] = solve(i, j);
    }
  }
}
