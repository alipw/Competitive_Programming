#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt; cin >> tt;
    while(tt--) {
        int n; cin >> n;
        long long join = 1, sepa = 1;
        for(int i = 1; i < n; i++) {
            long long s2 = (4 * sepa + join) % int64_t(1e9 + 7);
            long long j2 = (2 * join + sepa) % int64_t(1e9 + 7);
            join = j2, sepa = s2;
        }
        cout << (join + sepa) % int64_t(1e9 + 7) << endl;
    }
}
