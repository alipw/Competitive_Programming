#include <bits/stdc++.h>
using namespace std;

#define ar array

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

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int first,digits;
		int arr[numDigits(a)];
		int i = 0;
		while(a > 10){
			first = firstDigit(a);
			digits = numDigits(a);
			int subtractor = 10;
			for(int p = 0; p < digits-2; p++)
				subtractor *= 10;
			subtractor *= first;
			arr[i] = subtractor;
			i++;
			a -= subtractor;
		}
		if(a != 0){
			arr[i] = a;
			i++;
		}
		cout << i << "\n";
		for(int z = 0; z < i; z++){
			if(z != i-1)
				cout << arr[z] << " ";
			else
				cout << arr[z] << "\n";
		}
	}
}