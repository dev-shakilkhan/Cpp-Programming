/*
Write a C++ program that swaps two numbers.

Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/

#include<iostream>
using namespace std;

int main(){
    int x,y,temp;
    cout<<"Enter The Value of x = ";
    cin>>x;
    cout<<"Enter The Value of y = ";
    cin>>y;
    cout<<"\n Let's swap the values \n";

    temp = x;
    x = y;
    y = temp;

    cout<<"The Value of x is : "<<x;
    cout<<"\nThe Value of y is : "<<y;

    return 0;
}