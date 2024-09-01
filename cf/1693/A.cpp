#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define end goto done
int main(){
  ll tt, n, sm, nn; cin >> tt;
  while(tt--){
    cin >> n;
    sm = nn = 0;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] != 0) nn = i;
    }
    n = nn + 1;
    for(int i = 0; i < n; i++) {
      ll x = a[i];
      sm += x;
      if(sm < 0) {
        cout << "no" << endl;
        end;
      }
      if(i != n - 1 && sm == 0) {
        cout << "no" << endl;
        end;
      }
    }
    if(sm != 0) {
      cout << "no" << endl;
      end;
    }
    cout << "yes" << endl;
  done:
    continue;
  }
}
