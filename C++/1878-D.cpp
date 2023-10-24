#include <bits/stdc++.h>
#include <cmath>
#include <linux/limits.h>
using namespace std;
#define endl "\n"
#define MOD 1000000007
#define ull unsigned long long int
#define ll long long int0
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


umap<int, bool> prime;
// bool prime[1000000 + 1]; 
vector<ull> primes(1000000 + 1);
void SieveOfEratosthenes(ull n) 
{ 
    for (ull p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (ull i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 

    for (ull p = 2; p <= n; p++) 
        if (prime[p]) primes.push_back(p);
} 

ull d(ull n) {
    debug(n);
    ull ans = 1;
    for(const auto p : primes) {
        if(p * p * p > n) break;
        ull count = 1;
        while(n % p) {
            // n /= p;
            debug(count);
            count = count + 1;
        }
        ans = ans * count;
    }

    if(prime[n]) ans = ans * 2;
    else if(prime[uint64_t(sqrt(n))]) ans = ans * 3;
    else if(n != 1) ans = ans * 4;
    return ans;
}

void solve() {
    ull n, q; cin >> n >> q;

    ull ntemp = n;
    for(ull it = 0; it < q; it++) {
        ull command; cin >> command;
        if (command == 1) {
            ull x; cin >> x;
            ntemp = ntemp * x;
            if(ntemp % d(ntemp) != 0) cout << "NO\n";
            else cout << "YES\n";
        } else ntemp = n;
    }
}

int main() {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);
  int TEST_CASE;
  SieveOfEratosthenes(1000000 + 1);
  for(int i = 0; i < 1000000 + 1; i++) prime[i] = true;
  cin >> TEST_CASE;
  while (TEST_CASE--) {
    solve();
    cout << endl;
  }
  return 0;
}
