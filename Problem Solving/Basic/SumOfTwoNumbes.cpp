/*
Write a program in C++ to print the sum of two numbers.

Sample Output:
Print the sum of two numbers :
-----------------------------------
The sum of 29 and 30 is : 59
*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter 1st Number = ";
    cin>>num1;
    cout<<"Enter 2nd Number = ";
    cin>>num2;

    int sum = num1 + num2;
    cout<<"The sum of "<< num1<< " and "<< num2 << " is :" << sum;
    return 0;
}