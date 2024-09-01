#include<bits/stdc++.h>
#include <climits>
using namespace std;


#define ll long long
int main() {
  long long n = 1, cnt = 0;
  while(n < (ll)1e18) {
    n *= 3;
    cout << n << endl;
    cnt++;
  }
  cout << cnt;
}
