#include <stdio.h>
#include <iostream>

using namespace std;


int main() {
    int x, i, total = 0;

    // Get an integer input from the user
    cout<<("\nInput an integer: ");
    cin>>x;

    // Print all the divisors of x
    cout<<"All the divisors of "<<x<<  " are:\n";
    for(i = 1; i <= x; i++) {
        if((x%i) == 0){
            cout<< i << '\n' ;
            total +=i;
        }
    }
    cout<<"Sum of all divisors is:\n"<<total<<'\n';
    return 0;
}
