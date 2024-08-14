#include <bits/stdc++.h>
#include <complex>
using namespace std;

// what does the size do here?
// each reduction will optimize for the reduction of all possible combination
// that results in perfect square list each perfect square combination
//
// the question becomes: is there a non-keren array at that size?
// non-keren, for each i, j < n | i != j | a[i] * a[j] != perfect square
// how to quickly check that?
// if k is not fine, then for all j < k, j will also not be fine (is it though ?
// ) -> i need to get a better grasp on this 	is there a case where lower can
// achieve what the bigger does? no. 	so i believes it is true
//
// binary search it is -> no
// for each search, do what?
// i need to come up with a o(n) solution to check it, looking for o(N) solution
// to check whether there is a combination of size (K) where there is no keren
// combination of two numbers in order to reach that, i need some number it is
// possible to do the checking in O(N^2 logn) -> not fast enough
//
// it is fine when the it doesn't reduce enough to eliminate all the possible
// combination that causes prime factor search? yeah, normalize the numbers!
// reduce the amount of prime factor to either even or odd count! for each odd
// number, search for the same number! so for two, it's just two it's the same
// with 8 so there will only be only two number in ALL of the factors of two,
// that is two and four
//
// o(N) solution to check how many :
// 	for each iteration, after normalization, just search for the same
// number, if there are more than 1, then it's fine 	if there is only one
//
// 	then we need to count the number of pairs, the answer (K) is number of
// pairs - 1 	normalization:
// 	-> generate all prime numbers up to 10^7, use sieve, spf for fast factorization
//
// 	what's wrong with this?
// 	the normalization is actually a bit simpler
// 	only two casese
// 	all odd, or all even
// 	there is no mix odd even, since every odd will nullify itself

const int mxn = 1e7;
vector<int> spf(mxn + 1, 1);

void sieve() {
  for(int i = 2; i <= mxn; i++) {
    if(spf[i] != 1) continue;
    for(int j = i; j <= mxn; j += i) {
      if(spf[j] == 1) spf[j] = i;
    }
  }
}

int main() {
  sieve();
  int n; cin >> n;
  vector<int> a(n);
  for(auto &x : a) cin >> x;

  map<int,int> mpf;
  map<int,int> mpp;
  int mx_cnt = 0;
  // normalize the array
  for(int i = 0; i < n; i++) {
    int x = a[i];
    while(x > 1) {
      int pf = spf[x];
      mpf[pf]++;
      x = x / pf;
    }

    int normalized = 1;
    for(auto [p, c] : mpf) {
      if(c % 2) normalized *= p;
    }

    mpp[normalized]++;
    mx_cnt = max(mx_cnt, mpp[normalized]);

    mpf.clear();
  }

  if(mx_cnt == 1)  {
    cout << -1 << endl;
    return 0;
  }

  int rdc = 0;
  for(auto [n, c] : mpp) rdc += (c - 1);
  cout << n - rdc + 1 << endl;
}
