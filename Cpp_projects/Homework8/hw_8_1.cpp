#include <iostream>

using namespace std;

int main () {
    int myNums[10];
    int temp, x;
    float average = 0.0;

    /* Getting the numbers of arry from user */
    cout<<"Please give me ten number one by one: ";
    for (int k=0; k<10; k++) {
        cin>>myNums[k];
    };

    /* sorting the array numbers in order to find the max and min */
    for (int i=1; i < 10; i++) {
        for(int j = 0; j <(10-i); j++){
            if(myNums[j]>myNums[j+1]) {
                temp = myNums[j];
                myNums[j] = myNums[j+1];
                myNums[j+1] = temp;
            }
        }
    };

    average = (myNums[0] + myNums[9]) / 2;
    cout<<"the average number of "<<myNums[0]<<" and "<< myNums[9] << " is: " << average;
}