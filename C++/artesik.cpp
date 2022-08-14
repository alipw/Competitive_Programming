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
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define debug(a) {cout << "[" << #a << " : "; DEBUG_PRINTER((a)); cout << "]\n" ;}
template <typename T>
void DEBUG_PRINTER(T var) { 
	cout << var;
}
template <typename T>
void DEBUG_PRINTER(vector<T> var) { 
	for (int i = 0; i < var.size(); ++i) cout << var[i] << (i == var.size() - 1 ? "" : ", ");
}
template <typename T, typename S>
void DEBUG_PRINTER(vector<pair<T, S>> var) { 
	for (int i = 0; i < var.size(); ++i) cout << var[i].first << " -> " << var[i].second << (i == var.size() - 1 ? "" : endl);
}
template<typename T, typename S>
void DEBUG_PRINTER(umap<T, S> var) { 
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", ");
}
template<typename T, typename S>
void DEBUG_PRINTER(map<T, S> var) { 
	int j = 0; for (auto it = var.begin(); it != var.end(); it++, j++) cout << "[" << it->first << "," << it->second << "]" << (j == var.size() - 1 ? "" : ", "); 
}


//end of template

int lokasi_artesik(string s){
  for(int i = 0; i < s.length(); i++){
    if(s[i] == '*') return i;
  }
  return 0;
}

void solve() {
  string pattern; cin >> pattern;
  int n; cin >> n;

  int lokasi = lokasi_artesik(pattern);

  if(pattern.length() == 1){ // *
    for(int i = 0; i < n; i++){
      string s; cin >> s; cout << s << endl;      
    }
  }
  else{
    bool artesik_di_pinggir_kanan = lokasi == (pattern.length() - 1);
    bool artesik_di_pinggir_kiri = lokasi == 0;

    if(artesik_di_pinggir_kanan){ // ma*
      pattern = pattern.substr(0, pattern.length() - 1);
      for(int i = 0; i < n; i++){
        string s; cin >> s;

        if(s.length() >= pattern.length()){
          bool same = true;
          for(int j = 0; j < pattern.length() && same; j++){
            if(s[j] != pattern[j]) same = false;
          }

          if(same) cout << s << endl;
        }
      }
    }else if(artesik_di_pinggir_kiri){ // *ma
      pattern = pattern.substr(1, pattern.length());
      for(int i = 0; i < n; i++){
        string s; cin >> s;

        if(s.length() >= pattern.length()){
          bool same = true;
          for(int j = s.length() - pattern.length(), k = 0; j < s.length(); j++, k++){
            if(s[j] != pattern[k]) same = false;
          }

          if(same) cout << s << endl;
        }
      }
    }else{ // ma*an
      string pattern1 = pattern.substr(0, lokasi);
      string pattern2 = pattern.substr(lokasi + 1, pattern.length());
        
      for(int i = 0; i < n; i++){
        string s; cin >> s;

        if(s.length() >= (pattern.length() - 1)){
          bool same = true;
          for(int j = 0; j < pattern1.length() && same; j++){
            if(s[j] != pattern1[j]) same = false;
          }

          for(int j = s.length() - pattern2.length(), k = 0; j < s.length() && same; j++, k++){
            if(s[j] != pattern2[k]) same = false;
          }

          if(same) cout << s << endl;
        }
      }
    }
  }
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
	return 0;
}

