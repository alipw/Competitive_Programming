#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second

const ll maxn = 62;
ll C[maxn][maxn];

void precomp() {
  C[0][0] = 1;
  for(int i = 1; i <= 60; i++) {
    C[i][0] = 1;
    for(int j = 1; j <= i; j++) {
      C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
    }
  }
}

ll get(ll m, ll k) {
  return C[m][k];
}

int main(){
  precomp();
  ll n,k; cin >> n >> k;
  string s = "";
  for(int i = 0; i < 61; i++) s += '0';

  int last = -1;
  for(int i = 60; i >= 0 && n; i--) {
    if(get(i, n) > k) continue;
    else if(get(i, n) < k) {
      printf("c[%d][%lld]: %lld\n", i, n, C[i][n]);
      s[i] = '1';
      k -= get(i, n);
      n--;
    } else {
      last = i;
      break;
    }
  }


  for(int j = last - 1; j >= 0 && n; j--) {
    s[j] = '1';
    n--;
  }

  bool f = 0;
  for(int i = s.length() - 1; i >= 0; i--) {
    f = f || s[i] == '1';
    if(f) cout << s[i];
  }
  cout << endl;
}
