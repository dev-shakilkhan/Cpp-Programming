#include<iostream>
using namespace std;

int main(){
    float angle1,angle2,angle3;
    cout<<"Enter 1st angle : ";
    cin>>angle1;
    cout<<"Enter 2nd angle : ";
    cin>>angle2;

    angle3 = (180 - (angle1 + angle2));
    cout<<"The third angle is : "<< angle3<<endl;
    return 0;
}