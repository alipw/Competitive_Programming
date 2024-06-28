#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    vector<long long> ans(n), a(n);
    for(auto &x : a) cin >> x;
    ans[0] = a[0];

    for(int i = 1; i < n; i++) {
      ans[i] = ceil((ans[i - 1] + 1) * 1.f / (a[i] * 1.f)) * a[i];
    }

    cout << ans[n - 1] << endl;
  }
}
