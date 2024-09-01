#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int ptr = 0;
  vector<int> a(n);
  char c;
  while(true) {
    cin >> c;
    if(c == 'h')  {
      a[ptr]--;
      ptr--;
    } else if(c == 'l') {
      a[ptr]++;
      ptr++;
    }
    for(auto x : a) cout << x << "\t";
    cout << endl;
    for(int i = 0; i < n; i++) {
      if(i == ptr) cout << "^";
      cout << "\t";
    }
    cout << endl;
  }
}
