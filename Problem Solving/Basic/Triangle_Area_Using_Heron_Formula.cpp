#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float side1, side2, side3, s, area;
    cout<< "Inpute 1st side lanth : ";
    cin>>side1;
    cout<< "Inpute 2nd side lanth : ";
    cin>>side2;
    cout<< "Inpute 3rd side lanth : ";
    cin>>side3;

    s = (side1 + side2 + side3) / 2;
    area = sqrt (s * (s-side1) * (s-side2) * (s-side3));

    cout<<"The area of the triangle is : "<< area << endl <<endl;
    return 0;
}