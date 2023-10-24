#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int
#define umap unordered_map
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define absolute(a) sqrt((a) * (a))
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define debug(a)                                                               \
  {                                                                            \
    cout << "[" << #a << " : ";                                                \
    DEBUG_PRINTER((a));                                                        \
    cout << "]\n";                                                             \
  }
template <typename T> void DEBUG_PRINTER(T var) { cout << var; }
template <typename T> void DEBUG_PRINTER(vector<T> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(pair<T, S> var) {
  cout << var.first << ", " << var.second;
}
template <typename T, typename S> void DEBUG_PRINTER(vector<pair<T, S>> var) {
  for (int i = 0; i < var.size(); ++i)
    cout << var[i].first << " -> " << var[i].second
         << (i == var.size() - 1 ? "" : endl);
}
template <typename T, typename S> void DEBUG_PRINTER(umap<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S> void DEBUG_PRINTER(map<T, S> var) {
  int j = 0;
  for (auto it = var.begin(); it != var.end(); it++, j++)
    cout << "[" << it->first << "," << it->second << "]"
         << (j == var.size() - 1 ? "" : ", ");
}

// end of template
struct Interval {
    int s, e;
};
 
// Function used in sort
bool mycomp(Interval a, Interval b) { return a.s < b.s; }
 
void mergeIntervals(Interval arr[], int n)
{
    // Sort Intervals in increasing order of
    // start time
    sort(arr, arr + n, mycomp);
 
    int index = 0; // Stores index of last element
    // in output array (modified arr[])
 
    // Traverse all input Intervals
    for (int i = 1; i < n; i++) {
        // If this is not first Interval and overlaps
        // with the previous one
        if (arr[index].e >= arr[i].s) {
            // Merge previous and current Intervals
            arr[index].e = max(arr[index].e, arr[i].e);
        }
        else {
            index++;
            arr[index] = arr[i];
        }
    }
 
    // Now arr[0..index-1] stores the merged Intervals
    cout << "[";
    for (int i = 0; i <= index; i++)
    {
        cout << "[" << arr[i].s << ", " << arr[i].e;
        if(i == index) cout << "]";
        else cout << "], ";
    }
    
    cout << "]";
}
 
// Driver program
int main()
{
    int n; cin >> n;
    Interval arr[n];
    for(int i = 0; i < n; i++) {
        Interval cur = Interval{};
        cin >> cur.s;
        cin >> cur.e;
        arr[i] = cur;
    }
    // int n = sizeof(arr) / sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}
