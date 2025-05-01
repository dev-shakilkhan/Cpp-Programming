#include<iostream>
using namespace std;

int main(){
    float celsius, fahrenheit;
    cout<<"Enter Celsius : ";
    cin>>celsius;
    fahrenheit = ((9 * celsius)/5)+32;
    cout<<"Temparature in Fahrenheit : "<< fahrenheit <<endl;
    return 0;
}