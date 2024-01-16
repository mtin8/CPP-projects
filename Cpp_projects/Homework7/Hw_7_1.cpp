#include <iostream>

/* Let's do it with recursive functions */

using namespace std;

int power(int base, int a){
    if (a != 0){
        return(base * power(base, a-1));
    }else{
        return 1;
    }
}

int main (){
    int base, a, result;
    cout<<"Please give me a base number:";
    cin>>base;
    cout<<"Please give me power number(posetive number):";
    cin>>a;
    result = power(base, a);
    cout<<base<<"^"<<a<<"="<<result;
    
}