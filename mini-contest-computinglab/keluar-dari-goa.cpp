using namespace std;
#include <bits/stdc++.h>
#define ll long long

const int mxn = 2*1e5 + 1, MOD = 998244353;
vector<int> spf(mxn + 1, 1);

void sieve() {
  for(int i = 2; i <= mxn; i++) {
    if(spf[i] != 1) continue;
    for(int j = i; j <= mxn; j += i) {
      if(spf[j] == 1) spf[j] = i;
    }
  }
}

inline bool isp(int n) {
  return spf[n] == n;
}

ll binpow(ll a, ll b) {
    a %= MOD;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
  sieve();
  ll n, ans = 1; cin >> n;
  vector<ll> a(n);
  for(auto &x : a) cin >> x;
  sort(a.begin(), a.end());

  int j = n - 1;
  for(int i = n; i > 0; i--) {
    ll ii = i;
    if(isp(int(ii)) && ii != 1) ans *= binpow(a[j], ii * ii), j--;
    ans %= MOD;
  }
  while(j >= 0) {
    ans *= a[j];
    ans %= MOD;
    j--;
  }
  cout << ans << endl;
}
