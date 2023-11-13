#include <bits/stdc++.h>
using namespace std;

template<typename T>
T extended_gcd(T a, T b, T &x, T &y) {
    // basic case
    if (0 == b) {
        x = 1;
        y = 0;
        return a;
    }

    // recursive
    T r = extended_gcd(b, a % b, x, y);
    T t = y;
    y = x - (a / b) * y;
    x = t;
    return r;
}

template<typename T>
T modular_inverse(T a, T n) {
    T x, y;
    T r = extended_gcd(a, n, x, y);
    if (r > 1) {
        return -1;
    }
    // If a and b are both positive, we have
    // |x| < b / gcd(a, b) and |y| < a / gcd(a, b)
    return x < 0 ? x + n : x;
}

// Driver code
int main() {
  int64_t A = 3, M = 11;
  cin >> A >> M;

  int64_t ans =  modular_inverse(A, M);
  if(ans == -1) cout << "NO SOLUTION" << endl;
  else cout << ans << endl;
  return 0;
}
