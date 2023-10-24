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
int lenOfLongIncSubArr(vector<int> arr, int n)
{
    // 'max' to store the length of longest
    // increasing subarray
    // 'len' to store the lengths of longest
    // increasing subarray at different 
    // instants of time
    int max = 1, len = 1;
     
    // traverse the array from the 2nd element
    for (int i=1; i<n; i++)
    {
        // if current element if greater than previous
        // element, then this element helps in building
        // up the previous increasing subarray encountered
        // so far
        if (arr[i] > arr[i-1] && arr[i] - arr[i-1] == 1)
            len++;
        else
        {
            // check if 'max' length is less than the length
            // of the current increasing subarray. If true, 
            // then update 'max'
            if (max < len)    
                max = len;
                 
            // reset 'len' to 1 as from this element
            // again the length of the new increasing
            // subarray is being calculated    
            len = 1;    
        }    
    }

    // comparing the length of the last
    // increasing subarray with 'max'
    if (max < len)
        max = len;
     
    // required maximum length
    return max;
}
 
// Driver program to test above
int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr[i] = x;
    }
    debug(arr);
    auto lis = lenOfLongIncSubArr(arr, n);

    vector<int> rev(n);
    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }
    auto lds = lenOfLongIncSubArr(rev, n);
    cout << max(lis, lds);
}
