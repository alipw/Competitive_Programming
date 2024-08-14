#include <bits/stdc++.h>
using namespace std;

struct item {
  int x, y;
  item *l, *r;
  item() {}
  item(int key) : x(key), y(rand()), l(NULL), r(NULL) {}
  item(int key, int prior) : x(key), y(prior), l(NULL), r(NULL) {}
};
typedef item *pitem;

void split(pitem t, int key, pitem &l, pitem &r) {
  if (!t)
    l = r = NULL;
  else if (t->x <= key)
    split(t->r, key, t->r, r), l = t;
  else
    split(t->l, key, l, t->l), r = t;
}

int main() {}
