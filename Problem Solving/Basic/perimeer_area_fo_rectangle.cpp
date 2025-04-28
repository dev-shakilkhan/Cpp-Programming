#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int lenth, width;
    cout<<"Enter lenth of the Rectangle : ";
    cin>> lenth;
    cout<<"Entre width of the Ractangle : ";
    cin>> width;

    cout<<"\nThe perimeter of the ractabngle is : "<< 2 * (lenth + width)<<endl;
    cout<<"\nThe area of the rectangle is : "<< lenth * width<<endl;
    return 0;
}