#include<bits/stdc++.h>
using namespace std;


int main(){
  int tt; cin >> tt;
  while(tt--) {
    int x,y; cin >> x >> y;
    cout << min(x, y) << " " << max(x, y) << endl;
  }
}
