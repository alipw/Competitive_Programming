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

void print(vector<string> &board){
	for(int i = 0; i < board.size(); i++){
		cout << board[i] << endl;
	}
}

int get_terdalam(vector<string> &board, int row){
	int titik_terdalam = board.size();

	for(int i = 0; i < board.size(); i++){
		if(board[i][row] == '0') titik_terdalam = i;
		else break;
	}

	return titik_terdalam;
}

void runtuhkan(vector<string> &board, int from){
	for(int j = 0; j < board[0].length(); j++){
		int yang_bisa_diruntuhkan = 0;
		for(int i = 0; i < from; i++){
			yang_bisa_diruntuhkan += board[i][j] == '1';
			board[i][j] = '0';
		}

		int titik_terdalam = get_terdalam(board, j);
		for(int i = titik_terdalam; i > titik_terdalam - yang_bisa_diruntuhkan; i--) board[i][j] = '1';
	}
}

//end of template
void solve() {
	int r, c; cin >> r >> c;

	vector<string> board(r);
	for(auto &x : board) cin >> x;

	bool done = false;
	while(!done){
		int from = -1;
		for(int i = 0; i < r; i++){

			bool full = true;
			for(int j = 0; j < c; j++){
				if(board[i][j] == '0') full = false;
			}

			if(full){
				for(int j = 0; j < c; j++) board[i][j] = '0';
				from = i;
			}


		}
		done = from == -1;	
		runtuhkan(board, from);
	}
	print(board);

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}