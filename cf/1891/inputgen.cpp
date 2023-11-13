#include<bits/stdc++.h>
using namespace std;

#define uid uniform_int_distribution
int main(){
  random_device rd;
  mt19937 gen(rd());
  uid<> t(1, 1); 
  uid<> n(1, 10);
  uid<> ai(1, 20);

  int tt = t(gen);
  cout << tt  << endl;
  while(tt--) {
    int nn = n(gen);
    cout << nn << endl;
    while(nn--) {
      cout << ai(gen) << " ";
    }
    cout << endl;
  }
}
