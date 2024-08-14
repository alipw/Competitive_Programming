#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int>* nn;
int main(){
  int n,k; cin >> n >> k;
  nn t,h;
  map<int, nn> mp;
  int x, xx = -1;
  for(int i = 0; i < n; i++) {
    cin >> x;
    mp[x] = new pair(x, xx);
    if(i == 0) h = mp[x];
    xx = x;
  }
  t = mp[x];

  for(int i = 0; i < k; i++) {
    char c; int x; cin >> c >> x;
    if(c == 'A') {
      nn nh = new pair(x, -1);
      h->second = x;
      h = nh;
      mp[x] = nh;
    } else {
      h->second = t->first;
      t = mp[mp[x]->second];
      h = mp[x];
      mp[x]->second = -1;
    }
  }

  vector<int> v; v.reserve((int)10e5+1);
  do {
    v.push_back(t->first);
    t = mp[t->second];
  } while(t != nullptr);

  cout << v.size() << endl;
  for(auto i = v.rbegin(); i != v.rend(); i++) cout << *i << " ";
  cout << endl;
}
