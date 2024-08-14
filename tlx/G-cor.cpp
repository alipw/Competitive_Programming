#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  set<int> st;

  for(int i = 0; i < n; i++) {
    int x, factors = 1;
    cin >> x;
    for(int j = 2; j * j <= x && x > 1; j++) {
      int count = 0;
      while(x % j == 0) {
        x /= j;
        count++;
      }
      if(count % 2 != 0) factors *= j;
    }
    if(x > 1) factors *= x;
    st.insert(factors);
  }
  cout << (st.size() == n ? 0 - 1: (int) st.size() + 1);
  return 0;
}

