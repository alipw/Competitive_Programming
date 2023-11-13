#include<algorithm>
#include<iostream>
#include<map>
#include<vector>
using namespace std;

void debug(vector<int> &a){
  for(int & x : a) printf("%d,", x);
  cout << endl;
}

int lis(vector<int> &a) {
  vector<int> dp; dp.reserve(10000);
  for(int x : a) {
    auto it = lower_bound(dp.begin(), dp.end(), x);

    if(it == dp.end()) dp.push_back(x);
    else *it = x;

    debug(dp);
  }
  return dp.size();
}

int main () {
  vector<int> list = {1, 4, 5, 6, 2, 3, 4, 1, 2};
  cout << "list: ";
  int toinsert = 10;
  for(auto it = list.begin(); it < list.end(); it++) {
    vector<int> cpls = list;
    cout << it.base() << endl;
    // cpls.insert(it, 10);
    // debug(cpls);
    // lis(cpls);
  }
  return 0;
}
