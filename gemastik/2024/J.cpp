#include<iostream>
#include<algorithm>
using namespace std;

long long a[(int)1e5+1];
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n; cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  long long x = -1, y = a[n - 1] - a[0];
  for(int i = 1; i < n; i++) x = max(x, a[i] - a[i - 1]);
  cout << x << "\n" << y << "\n";
}
