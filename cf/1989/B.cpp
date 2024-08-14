#include <bits/stdc++.h>
using namespace std;

int main() {
  int tt;
  cin >> tt;
  while (tt--) {
    string a, b;
    cin >> a >> b;
    // longest common substring O(N^2)
    int longest = 0;
    string ans;
    for (int i = 0; i < b.length(); i++) {
      int j = i;

      int cr = 0;
      int lm = 0;
      string att = "";
      while (j < b.length()) {
        int pos = a.find(b[j], lm);
        if (pos != string::npos) lm = pos + 1, cr++, att.push_back(a[pos]);
        else break;
        j++;
      }

      if(cr > longest) ans = att;

      longest = max(cr, longest);
    }
    printf("longest substring: %s, with length: %d\n", ans.c_str(), longest);
    cout << a.length() + b.length() - longest;
    cout << endl;
  }
}
