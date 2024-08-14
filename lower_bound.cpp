#include<bits/stdc++.h>
using namespace std;

#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

int closest(vector<int> &a, int t) {
  auto pos = lower_bound(all(a), t);
  if(pos == a.begin()) return *pos;
  int gt = *pos, ls = *(--pos);
  if(abs(gt - t) > abs(ls - t)) return ls;
  else return gt;
}

int main(){
  vector<int> a = {1, 9, 20, 30, 40};
  int t; cin >> t;
  printf("closest to %d is: %d\n", t, closest(a, t));
}
