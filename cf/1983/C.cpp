#include<bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> a, b, c;
ll tot3;

int getleft(int ix, ll sm, vector<ll> &v) {
  int i = 0;
  for(; i < ix; i++) {
    if(sm - v[i] >= tot3) {
      sm -= v[i];
      continue;
    }
    else break;
  }
  return i;
};

int getright(int ix, ll sm, vector<ll> &v) {
  int i = v.size() - 1;
  for(; i > ix; i--) {
    if(sm - v[i] >= tot3) {
      sm -= v[i];
      continue;
    }
    else break;
  }
  return i;
}

// challenge,
// how to minimize the size of the current segment:
// current idea but not enough time to proceed: 
// binary search on the left bound on prefix sum
// search for the next largest element that is 
int main(){
  int tt; cin >> tt;
  while(tt--) {
    int n; cin >> n;
    a.resize(n, 0), b.resize(n, 0), c.resize(n, 0);
    ll tot = 0;
    for(auto &x : a) cin >> x, tot += x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;
    tot3 = (tot / 3) + (tot % 3 != 0);
    set<pair<ll,ll>> sa,sb,sc; // segments
    
    ll csm = 0, ssm = 0;
    for(int i = 0; i < n; i++) {
      csm += a[i];
      ssm += a[i];
      if(csm >= tot3) {
        int l = getleft(i, ssm, a);
        sa.insert({l, i});
        csm = 0;
      }
    }
    csm = 0, ssm = 0;
    for(int i = n - 1; i >= 0; i--) {
      csm += a[i];
      ssm += a[i];
      if(csm >= tot3) {
        int r = getright(i, ssm, a);
        sa.insert({i, r});
        csm = 0;
      }
    }
    printf("alice segment: \n");
    for(auto x : sa) printf("{%lld, %lld}\n", x.first, x.second);

    csm = 0, ssm = 0;
    for(int i = 0; i < n; i++) {
      csm += b[i];
      ssm += b[i];
      if(csm >= tot3) {
        int l = getleft(i, ssm, b);
        sb.insert({l, i});
        csm = 0;
      }
    }
    csm = 0, ssm = 0;
    for(int i = n - 1; i >= 0; i--) {
      csm += b[i];
      ssm += b[i];
      if(csm >= tot3) {
        int r = getright(i, ssm, b);
        sb.insert({i, r});
        csm = 0;
      }
    }

    printf("bob segment: \n");
    for(auto x : sb) printf("{%lld, %lld}\n", x.first, x.second);

    csm = 0, ssm = 0;
    for(int i = 0; i < n; i++) {
      csm += c[i];
      ssm += c[i];
      if(csm >= tot3) {
        int l = getleft(i, ssm, c);
        sc.insert({l, i});
        csm = 0;
      }
    }
    csm = 0, ssm = 0;
    for(int i = n - 1; i >= 0; i--) {
      csm += c[i];
      ssm += c[i];
      if(csm >= tot3) {
        int r = getright(i, ssm, c);
        sc.insert({i, r});
        csm = 0;
      }
    }

    printf("charlie segment: \n");
    for(auto x : sc) printf("{%lld, %lld}\n", x.first, x.second);

    for(auto as : sa) {
      for(auto bs : sb) {
        for(auto cs : sc) {
          pair<ll,ll> sg;
          if(!(bs.first > as.second || bs.second < as.first)) {
            continue;
          }
          sg = {min(as.first, bs.first), max(as.second, bs.second)};
          if(!(cs.first > sg.second || cs.second < sg.first)) {
            continue;
          }
          printf("%lld %lld %lld %lld %lld %lld\n", as.first + 1, as.second + 1, bs.first + 1, bs.second + 1, cs.first + 1, cs.second + 1);
          goto done;
        }
      }
    }
    cout << -1 << endl;

  done:
    continue;
  }
}
