#include<iostream>
using namespace std;

int main(){
    int n,factorial = 1;
    cout<<"Enter the number to Factorial: ";
    cin>>n;
    for( int i = n-1; i>0 ; i--){
        factorial = factorial*i;
    }
    cout<< "So the factorial is : ";
    cout << factorial;

    return 0;
}