#include <bits/stdc++.h>
using namespace std;

struct node {
  int val;
  node *l;
  node *r;
};

void insert(node *root, int x) {
  if (root == NULL) {
    root->val = x;
    return;
  }

  if(x > root->val) insert(root->r, x);
  else insert(root->l, x);
}

int main() {}
