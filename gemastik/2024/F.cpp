#include<bits/stdc++.h>
using namespace std;

#define ll long long
ll n,p,q,val;
// i didn't knew that it can be cached this way
// i didn't know that the amount of repeated computation will be that much
map<ll,ll> dp;

ll solve(ll c){
  if(c == 0) return 0;
  if(dp[c] != 0){
    printf("cached: %lld\n", c);
    return dp[c];
  } 

  ll rm = c % 2;
  ll ans = c;
  ans = min(ans, rm + solve((c - rm) / 2) + p);
  rm = c % 3;
  ans = min(ans, rm + solve((c - rm) / 3) + q);
  dp[c] = ans;
  return ans;
}

int main(){
  cin >> n >> p >> q;
  while(n--) {
    cin >> val;
    cout << solve(val) << endl;
    cout << dp.size() << endl;
  }
}
