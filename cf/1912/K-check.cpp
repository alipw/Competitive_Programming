// Calm down.
// Think three times, code twice.
#include <bits/stdc++.h>
#define forr(_a, _b, _c) for (int _a = _b; _a <= _c; ++_a)
#define ford(_a, _b, _c) for (int _a = _b + 1; _a-- > _c;)
#define forf(_a, _b, _c) for (int _a = _b; _a < _c; ++_a)
#define st first
#define nd second
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define piii pair<int, pii>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define all(x) begin(x), end(x)
#define mask(i) (1LL << (i))
#define bit(x, i) (((x) >> (i)) & 1)
#define bp __builtin_popcountll
#define file "test"

using namespace std;
const int N = 2e5 + 5;
const int mod = 998244353; // 998244353
const ll oo = 1e18;

int n, a[N];
ll dp[N][4][2][2][2];

void add(ll &a, ll b) { a = (a + b) % mod; }

void to_nho_cau() {
  cin >> n;
  forr(i, 1, n) {
    cin >> a[i];
    if (a[i] & 1)
      a[i] = 1;
    else
      a[i] = 0;
  }
  // dãy con không liên tiếp
  // dp[i][j][x][y][z]
  // xét i phần tử đầu với số lượng đã lấy là j và x y z lần lượt là tính chẵn
  // lẻ của bộ ba số đó
  dp[0][0][0][0][0] = 1;
  forr(i, 1, n) forr(sl, 0, 3) forr(x, 0, (sl > 0)) forr(y, 0, (sl > 1))
      forr(z, 0, (sl > 2)) {
    // lấy kết quả từ i trước
    add(dp[i][sl][x][y][z], dp[i - 1][sl][x][y][z]);
    // nếu lấy a[i] làm số cuối trong bộ ba số
    if (sl == 3) {
      if (z == a[i] && (x + y + z) % 2 == 0) {
        // bắt cặp với những bộ ba đã được ghép trước đó
        add(dp[i][sl][x][y][z], dp[i - 1][sl][z][x][y]);
        // bắt cặp với bộ 2
        add(dp[i][sl][x][y][z], dp[i - 1][sl - 1][x][y][0]);
      }
    } else if (sl == 2) {
      // bắt cặp với bộ 1
      if (y == a[i])
        add(dp[i][sl][x][y][z], dp[i - 1][sl - 1][x][0][0]);
    } else if (sl == 1) {
      // khởi tạo giá trị đầu của bộ
      if (x == a[i])
        add(dp[i][sl][x][y][z], dp[i - 1][sl - 1][0][0][0]);
    }
  }

  ll ans = 0;
  forr(x, 0, 1) forr(y, 0, 1) forr(z, 0, 1) { add(ans, dp[n][3][x][y][z]); }

  cout << ans << "\n";
}

signed main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  // cin >> t;
  while (t--)
    to_nho_cau();
}
/*
1.self check:
2.long long
3.size of array
4.code for testing
5.initializing
6.modulo number
*/
