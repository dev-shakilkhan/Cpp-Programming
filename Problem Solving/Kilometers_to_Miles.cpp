#include<iostream>
using namespace std;
#define ONE_MILE 0.621371
int main(){
    float kilometers, miles;
    cout<<"Enter the Kilometer value : ";
    cin>>kilometers;
    miles = kilometers * ONE_MILE;
    cout<<"So, "<<kilometers<<" is = to "<<miles<<" miles";
    return 0;
}