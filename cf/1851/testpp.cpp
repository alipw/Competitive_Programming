#include<iostream>

#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")

int main() {
  long long ans = 0;
  for(long long i = 0; i < 1e10 * 4; i++) {
    ans += 1;
  }
  std::cout << ans;
  return 0;
}
