#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn = 1000;
ll dp[maxn][maxn], a[maxn], sz[maxn];

int main(){
  ll n,k; cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++){ // this is for length of 3
    for(int j = i + 1; j < n; j++) {
      long long* pos = lower_bound(a + j + 1, a + n, a[i] + a[j]);
      dp[i][j] = pos - a;
    }
  }

  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      printf("dp[%d][%d]: %lld\n", i, j, dp[i][j]);
    }
  }
}
