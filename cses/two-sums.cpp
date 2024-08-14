#include<bits/stdc++.h>
using namespace std;

#define ll int64_t
int main(){
    ll n; cin >> n;
    ll tgt = (n * (n + 1)) / 2;
    if(tgt % 2) {
        cout << "0\n";
        return 0;
    }
    tgt /= 2;
    vector<vector<ll>> dp(n + 1, vector<ll> (tgt + 1));
    for(int i = 0; i <= n; i++) dp[i][0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= tgt; j++) {
            dp[i][j] = dp[i - 1][j];
            if(j - i >= 0) dp[i][j] += dp[i - 1][j - i];
            dp[i][j] %= ll(1e9 + 7);
        }
    }
    cout << dp[n][tgt] / 2 << endl;
}
