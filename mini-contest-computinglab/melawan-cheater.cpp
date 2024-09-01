#include<bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c,d,x,y;
  cin >> a >> b >> c >> d >> x >> y;
  int da = abs(a - x) + abs(b - y), db = abs(c - x) + abs(d - y) - min(abs(c - x), abs(d - y));
  if(da < db) {
    cout << "owo!";
  } else if(db < da) {
    cout << "qwq...";
  } else {
    cout << "omo";
  }
  cout << endl;
}
