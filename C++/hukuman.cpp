#include<iostream>
using namespace std;
	
unsigned long long int a = 0, b = 0, ans = 0,numbersOnThere = 0;

void solve(){
	//in this input, its guaranteed that b is always greater than a 
	cin >> a >> b;
	// numbers on there is how much numbers are in the set
	numbersOnThere = ((b - a)) + 1;
	if(numbersOnThere % 2 == 0){
		ans = (a + b) * (numbersOnThere/2);
	}else{
		ans = (a + b) * ((numbersOnThere/2) + 1) + ((numbersOnThere/2) + a);
	}
	ans %= 1000000007;
	cout << ans;
}


int main(){
	solve();
}