#include<bits/stdc++.h>
using namespace std;


int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(auto &x : a) cin >> x;
  int ans = 0;
  for(int i = 0; i < pow(2, n); i++) {
    string bits = std::bitset<18>(i).to_string();
    reverse(bits.begin(), bits.end());
    vector<int> sq;
    for(int i = 0; i < n; i++) {
      if(bits[i] == '1') sq.push_back(a[i]);
    }
    if(sq.size() < 3) continue;
    cout << "the array: ";
    for(auto x : sq) cout << x << ", ";
    cout << endl;
    bool all_ok = true;
    for(int i = 0; i < sq.size() - 3 + 1; i++) {
      long long sm = 0;
      for(auto x = i; x < i + 3; x++) {

        cout << sq[x] << ", ";
        sm += sq[x];
      }
      cout << endl;
      all_ok = all_ok && sm % 2 == 0;
    }
    if(all_ok) ans++;
    cout << endl << endl;
  }

  cout << ans << endl;
}
