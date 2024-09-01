#include<bits/stdc++.h>
using namespace std;

int main(){
  int a[] = {1,2,3,4,5};
  cout << (a+5) - lower_bound(a, a + 5, 3) << endl;
}
