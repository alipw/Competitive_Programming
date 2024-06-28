#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--){
    int n1,n2,n3,n4; cin >> n1 >> n2 >> n3 >> n4;
    int ans = 0;
    ans += n1 / 2 + n2 / 2 + n3 / 2 + n4 / 2;

    n1 %= 2, n2 %= 2, n3 %= 2;
    if(n2 != 0 && n3 != 0 && n1 != 0){
      int mn = min(n2, min(n3, n1));
      n1 -= mn;
      n2 -= mn;
      n3 -= mn;
      ans += mn;
    }

    cout << ans << endl;
  }
}
