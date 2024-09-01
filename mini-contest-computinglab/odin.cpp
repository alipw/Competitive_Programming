#include<bits/stdc++.h>
using namespace std;


int main(){
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if(i == 0) a[i] = x;
    else a[i] = a[i - 1] + x;
  }
  while(q--) {
    int l,r; cin >> l >> r; l--, r--;
    cout << a[n - 1] - a[r] + (l == 0 ? 0 : a[l - 1]) << endl;
  }
}
