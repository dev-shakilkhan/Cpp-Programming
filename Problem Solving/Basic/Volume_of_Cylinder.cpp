#include<iostream>
using namespace std;

int main(){
    float radius_cylinder, hight_cylindre;
    cout<<"Enter the radius of the cylinder : ";
    cin>>radius_cylinder;
    cout<<"Enter the hight of the cylinder : ";
    cin>>hight_cylindre;

    cout<<"\n The volume of cylinder is : "<< 3.1416*radius_cylinder*radius_cylinder*hight_cylindre<<endl;

    return 0;
}