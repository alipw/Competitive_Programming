#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

#define ll int64_t
using namespace std;

int main () {
  int n; cin >> n;
  vector<int> a(n);
  set<int> st;
  for(int &x : a) 
  {
    cin >> x;
    st.insert(x);
  }

  if(st.size() != n) {
    cout << 0;
    return 0;
  } 


  ll ans = 1;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      ans *= (a[i] ^ a[j]) % 998244353;
      ans %= 998244353;
    }
  }
  cout << ans;
}
