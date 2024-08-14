#include<bits/stdc++.h>
using namespace std;

struct node {
  node* parent;
  node* l;
  node* r;
  int v;
};

void insert(node* root, int val) {
  if(root == nullptr) {
    node* newnode = new node();
    newnode->v = val;
    *root = *newnode;
  }
};


int main(){

}
