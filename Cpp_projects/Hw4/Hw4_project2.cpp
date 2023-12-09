#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    float a, b, c, result;
    cout<<"please give me three numbers:\n";
    cin>>x>>y>>z;
    a = (x - y) * (x + z);
    /* Bc of using pow function, I've used c varriable here */
    c = (x + y + z);
    b = pow(c, 2) + 1;
    result = a / b;
    cout<<"THE RESULT IS:"<<result<<"\n";
}