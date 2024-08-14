#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt; cin >> tt;
  while(tt--){
    string s; cin >> s;
    ll ans = 1;
    for(char c : s) {
      ll tv = c - '0';
      ans *= ((tv + 1) * (tv + 2)) / 2;
    }
    cout << ans << "\n";
  }
} 
