/*
Write a C++ program that calculates the volume of a sphere.

Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
*/

#include<iostream>
using namespace std;

int main(){
    double radius, radius_Valuble;
    cout<<"\nEnter the radius of your Sphere : ";
    cin>> radius;
    radius_Valuble = (4*3.1416*radius*radius*radius)/3;
    cout<<"\nSo The volume of you Sphere is : "<<radius_Valuble<<endl;
    return 0;
}
