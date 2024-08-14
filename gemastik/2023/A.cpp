#include<bits/stdc++.h>
using namespace std;
#define all(a) a.begin(), a.end()

int main(){
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    int mxi = max_element(all(a)) - a.begin();
    int mni = min_element(all(a)) - a.begin();
    int t = a[mxi] - a[mni];

    if(t == 0) {
        printf("SESUAI\n");
        return 0;
    }
    if(t % 2) {
        printf("TIDAK SESUAI\n");
        return 0;
    }

    a[mxi] -= t / 2;
    a[mni] += t / 2;

    if(*max_element(all(a)) == *min_element(all(a))) printf("%d %d %d\n", t / 2, mxi + 1, mni + 1);
    else printf("TIDAK SESUAI\n");
}
