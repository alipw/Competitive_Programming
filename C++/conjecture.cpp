
	#include <iostream>
	using namespace std;

	
	void ApplyFunction(unsigned long long number){
		unsigned long long  realNumber = number;
		unsigned long long totalStep;
		while(number != 1){
			bool isEven;
			isEven = ((number%2) == 0);
			if(isEven){
				number = number/2;
			}else{
				number = (number * 3) + 1;
			}
			totalStep++;
			cout << number << endl;
		}
		cout << "Total step needed for " << realNumber << " is : "<< totalStep << endl;
	}

	int main(){
		cout << "input the number : ";
		unsigned long long num;
		cin >> num;
		ApplyFunction(num);
	}

	hey not bad