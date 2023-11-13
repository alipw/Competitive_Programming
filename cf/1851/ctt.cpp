#include<bits/stdc++.h>
#include <cstdlib>

using namespace std;
int main () {
  int n = 2 * 1e3;
  int k = 0;
  cout << n << " " << k << endl;
  for(int i = 0; i < n; i++) cout << rand() << " ";
  cout << endl;
  for(int i = 0; i < n; i++) {
    cout << n - 1 << endl;
    for(int j = 0; j < n; j++) {
      if(j == i) continue;
      cout << j + 1 << " ";
    }
    cout << endl;
  }
}
