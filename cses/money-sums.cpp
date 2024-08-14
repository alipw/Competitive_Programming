#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    set<int> s;
    for(auto x : a) {
        set<int> s2 = s;
        for(auto v : s2) s.insert(v + x);
        s.insert(x);
    }
    cout << s.size() << endl;
    for(auto x : s) cout << x << " ";
    cout << endl;
}
