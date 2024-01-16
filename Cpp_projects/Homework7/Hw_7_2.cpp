#include <iostream>
using namespace std;

void findQuotientAndRemainder(int dividend, int divisor, int& quotient, int& remainder) {
	quotient = 0;
	remainder = dividend;
	
	while (remainder >= divisor) {
		remainder -= divisor;
		quotient += 1;
	}
}

int main() {
	int dividend = 10;
	int divisor = 3;
	int quotient, remainder;
	
	findQuotientAndRemainder(dividend, divisor, quotient, remainder);
	
	cout << "Quotient: " << quotient << endl;
	cout << "Remainder: " << remainder << endl;
	
	return 0;
}
