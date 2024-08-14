#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--) {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    a %= 12, b %= 12, c %= 12, d %= 12;
    if(a > b) swap(a,b);
    map<int,int> outer, inner;
    for(int i = a; i <= b; i++) inner[i % 12] = 1;
    for(int i = b; i % 12 != a; i++) outer[i % 12] = 1;
    // cout << "inner: \n";
    // for(auto x : inner) {
    //   cout << x.first << ", ";
    // } 
    // cout << '\n';

    // cout << "outer: \n";
    // for(auto x : outer) {
    //   cout << x.first << ", ";
    // } 
    // cout << '\n';

    if((inner[c] && outer[d]) || (inner[d] && outer[c])) cout << "YES";
    else cout << "NO";
    cout << endl;
  }
}
