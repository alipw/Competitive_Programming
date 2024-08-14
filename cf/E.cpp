#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--) {
        int n,q; cin >> n >> q;
        vector<long long> a(n), pref(n);
        for(auto &x : a) cin >> x;
        sort(a.rbegin(), a.rend());
        pref[0] = a[0];
        for(int i = 1; i < n; i++) pref[i] = pref[i - 1] + a[i];
        while(q--) {
            long long x; cin >> x;
            auto pos = lower_bound(pref.begin(), pref.end(), x);
            if(pos == pref.end()) cout << -1;
            else cout << pos - pref.begin() + 1;
            cout << endl;
        }
    }
}
