#include <bits/stdc++.h>
using namespace std;

int heap[1000];

int n = 1; // this will start from index 1 (to simplify things)
int parent(int i) { return i / 2; }
int l(int i) { return i * 2; }
int r(int i) { return i * 2 + 1; }
void insert(int x) {
  heap[n] = x;
  int i = n;
  n++;
  if (n == 2)
    return;

  while (i > 1 && heap[parent(i)] < x) {
    swap(heap[i], heap[parent(i)]);
    i = parent(i);
  }
}

int main() {
  while (1) {
    int x;
    cin >> x;
    insert(x);
    for (int i = 1; i < n; i++)
      cout << heap[i] << ", ";
    cout << endl;
  }
}
