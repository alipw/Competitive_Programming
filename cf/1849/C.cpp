#include <algorithm>
#include <bitset>
#include <cmath>
#include<iostream>
#include<set>
#include<map>
#include<vector>
#include<cstring>

#define ll int64_t
#define endl "\n"
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    vector<int> ans,sq;
    ans.reserve(1000); sq.reserve(1000);
    ans.push_back(0);

    bitset<32> b(n);
    for(int i = 0; i < 31 - __builtin_clz(n); i++) 
      if(b[i]) {
        ans.push_back(1 << i);
      }

    int nn = n;
    for(int &x : ans) {
      sq.push_back(n - x);
      n -= x;
    }

    while(n != 1) {
      n /= 2;
      sq.push_back(n);
    }
    cout << sq.size() << endl;
    for(auto & x : sq) cout << x << " ";

    cout << endl;
  }
}
