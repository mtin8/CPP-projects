#include <iostream>

using namespace std;

int main () {
    int salary, tax;
    cout<<"GIVE ME YOUR SALARY HUMAN!:\n";
    cin>>salary;
    if (salary >= 6000000 && salary < 8000000) {
        tax = salary * 0.05;
        salary = salary - tax;
    } else if (salary >= 8000000 && salary < 10000000)
    {
        tax = salary * 0.10;
        salary = salary - tax;
    } else if (salary >= 10000000 && salary < 14000000)
    {
        tax = salary * 0.15;
        salary = salary - tax;
    }  else if (salary >= 14000000 && salary < 18000000)
    {
        tax = salary * 0.20;
        salary = salary - tax;
    }  else if (salary >= 18000000 && salary < 25000000)
    {
        tax = salary * 0.25;
        salary = salary - tax;
    }  else if (salary > 25000000)
    {
        tax = salary * 0.35;
        salary = salary - tax;
    } else
    {
        cout<<"There is no tax for your salary!";
    };
    
    cout<<"Your salary after taxes is:\t" << salary << "\n";
}