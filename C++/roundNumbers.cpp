#include <bits/stdc++.h>
using namespace std;

int firstDigit(int n) 
{ 
    // Remove last digit from number 
    // till only one digit is left 
    while (n >= 10)  
        n /= 10; 
      
    // return the first digit 
    return n; 
} 

int numDigits(int number)
{
    int digits = 0;
    if (number < 0) digits = 1; // remove this line if '-' counts as a digit
    while (number) {
        number /= 10;
        digits++;
    }
    return digits;
}

void solve(){
	int number,answer;
	cin >>  number;
	if(number <= 10)
		answer = number;
	else{
		int subctractionNumber;
		while(number >= 10){
			int first = firstDigit(number);
			int digits = numDigits(number) - 1;
			subctractionNumber = first * (10 * digits);
			number -= subctractionNumber;
			cout << number << " ";
		}
		cout << number << "\n";
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();

}