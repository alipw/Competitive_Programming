#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--) {
    string s; cin >> s;
    map<char,int> mp;
    int n = s.length();
    for(int i = 0; i < n; i++){
      mp[s[i]] = i;
    }
    if(mp.size() == 1) {
      cout << "NO";
    }
    else {
      swap(s[mp.begin()->second], s[(++mp.begin())->second]);
      cout << "YES\n" << s;
    }
    cout << endl;
  }
}
