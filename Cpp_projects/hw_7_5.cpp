#include <stdbool.h> 
#include <stdio.h> 
#include <iostream>

using namespace std;

bool isPrime(int n) 
{ 
	if (n <= 1) 
		return false; 

	for (int i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 

	return true; 
} 


void sumPrimes(int n) 
{ 
    int sum = 0;
	for (int i = 2; i <= n; i++) {
		if (isPrime(i)) {
			sum += i;
            cout<<i<<"\n";
        }
    }    
    cout<<sum;
} 


int main() 
{ 
	int n;
    cin>>n; 
	sumPrimes(n); 
} 
