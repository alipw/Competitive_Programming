#include <bits/stdc++.h>
using namespace std;
#define ar array

void decToBinary(long long n) 
{ 
    // array to store binary number 
    long long binaryNum[1024]; 
  
    // counter for binary array 
    long long i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    for (long long j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 

void solve(){
	long long n;
	cin >> n;
	if(n == 1){
		cout << '0';
	}else{
		long long ans = n * (n-1);
		decToBinary(ans);
	}

}


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	solve();
}