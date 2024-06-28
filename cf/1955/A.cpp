#include<bits/stdc++.h>
using namespace std;

int main(){
  int tt; cin >> tt;
  while(tt--){
    int n,a,b; cin >> n >> a >> b;
    cout << min((n / 2) * b + (n % 2) * a, n * a) << endl;
  }
}
