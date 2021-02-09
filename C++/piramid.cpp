
	#include <iostream>
	using namespace std;

	int main() {
		for(int a = 0; a < 10; a++) {
			for(int b = 10; b > a; b--){
				cout << " ";
			}
			for(int c = 10; c >	 (10-a); c--){
				cout << " *";
			}
			cout << endl;
		}
	}