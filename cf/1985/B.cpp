#include<bits/stdc++.h>
using namespace std;


int main(){
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    int cs,css, ca;
    for(int x = 2; x <= n; x++) {
      cs = 0;
      for(int i = 2; i <= n; i++) {
        if(i % x == 0) {
          cs += i;
        }
      }
      if(cs > css) {
        css = cs;
        ca = x;
      }
    }
    cout << ca << endl;
  }
}
