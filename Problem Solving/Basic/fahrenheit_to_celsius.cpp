#include<iostream>
using namespace std;

int main(){
    float fahrenheit , celsius;
    cout<<"Enter Fahrenheit temparature : ";
    cin>>fahrenheit;
    celsius = (5 * (fahrenheit - 32)) / 9;
    cout<<"The celsius temparature is : "<< celsius << endl;
    return 0;
}