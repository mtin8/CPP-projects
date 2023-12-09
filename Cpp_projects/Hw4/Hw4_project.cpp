#include <iostream>
#include <cmath>

using namespace std;

int main ()
    {
        
        float a, b, sum, subtraction, multiplication, left;
        cout<<"give me two numbers little human!!!\n";
        cin>>a>>b;
        sum = a +b;
        subtraction = a - b;
        multiplication = a * b;
        left = fmod(a, b);
        cout<< "sum: " << sum << "\tsubtraction: " << subtraction << "\tmultiplication: " << multiplication << "\twhat left:" << left <<"\n";
    }


