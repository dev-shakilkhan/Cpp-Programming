#include<iostream>
#include<math.h>
using namespace std;

#define PI 3.14159

int main(){
    float radius, area, circumference;
    cout<<"Enter radius : ";
    cin>>radius;

    area = PI *radius *radius;
    circumference = 2 * PI *radius;

    cout<<"The are of circle is : "<<area<<endl;
    cout<<"The circumference of circle is : "<< circumference <<endl;
    return 0;
}