#include<bits/stdc++.h>
using namespace std;


int main(){
  int tt; cin >> tt;
  while(tt--) {
    string s;
    cin >> s;
    string sp;
    int ol = -1, lo = 0;
    for(int i = 0; i < s.length(); i++) {
      if(i == 0 || s[i] != s[i - 1]) {
        sp.push_back(s[i]);
      }
    }
    for(int i = 0; i < sp.length() - 1; i++) {
      if(sp[i] == '0' && sp[i + 1] == '1') ol++;
      else lo++;
    }
    cout << max(max(ol, 0) + lo + 1, 1) << endl;
  }
}
