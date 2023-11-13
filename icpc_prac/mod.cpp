#include<bits/stdc++.h>
#define ll int64_t
#define ull uint64_t

using namespace std;
int main() {
  int m, a; cin >> a >> m;
  printf("__gcd(%d, %d): %d\n", a , m, __gcd(a, m));
  for(int i = 1; i <= m * 20; i++) {
    if (i % a == 0) printf("%d\t", i % m);
    else printf("\033[0;31m%d\t\033[0m", i % m);
    if(i % m == 0) cout << endl;
  }
}
