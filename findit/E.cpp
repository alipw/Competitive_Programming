#include <bits/stdc++.h>
using namespace std;
int main() {

  long long n, q;
  cin >> n >> q;

  vector<long long> a(n), pref(n + 1), rpref(n);
  long long sm = 0;
  for (long long i = 0; i < n; i++) {
    cin >> a[i];
    sm += a[i];
  }

  sort(a.begin(), a.end());

  pref[0] = 0;
  for (int i = 1; i < n; i++)
    pref[i] = a[i - 1] + pref[i - 1];
  pref[n] = pref[n - 1] + a[n - 1];

  rpref[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--)
    rpref[i] = rpref[i + 1] + a[i];

  // for(auto x : pref) cout << x << " ";

  while (q--) {

    long long ans = 0;
    long long l, r;
    cin >> l >> r;

    auto lv = upper_bound(a.rbegin(), a.rend(), l, std::greater<long long>());
    // auto rv = upper_bound(a.begin(), a.end(), r);
    auto rv = upper_bound(a.begin(), a.end(), r);
    // cout << *lv << endl;
    // cout << *rv << endl;
    long long ld = distance(a.begin(), lv.base());
    long long rd = distance(a.begin(), rv);
    // cout << "ld: " << ld << endl << "rd: " << rd << endl;

    // cout << (rv != a.end()) << endl;
    ans += (l * ld) - pref[ld];
    if (rv != a.end())
      ans += sm - pref[rd] - (r * (n - rd));
    cout << ans << endl;
  }
}
