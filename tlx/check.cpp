#include<bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  for(auto &x : a) cin >> x;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      double mul = a[i] * a[j];
      if(ceil(sqrt(mul)) == floor(sqrt(mul))) printf("%d is a perfect square!\n", (int)mul);
    }
  }
}
