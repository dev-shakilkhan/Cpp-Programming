#include<iostream>
using namespace std;

class coord{
    int x,y,z;
public:
    coord(int a = 0, int b=0,int c= 0){
        x=a;
        y=b;
        z=c;
    }
    void print()
    {
        cout<<x<<" "<<y<<" "<<z;
        cout<<endl;
    }
    coord operator+ (coord ob2);
};
coord coord :: operator+ (coord ob2){
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    temp.z = z + ob2.z;
    return temp;
}

int main(){
    coord ob1(10,20,30), ob2(5,5,5),ob3;
    cout<<"ob1 = ";
    ob1.print();
    cout<<"ob2 = ";
    ob2.print();
    ob3 = ob1 + ob2;
    cout<<"ob1 + ob2 = ";
    ob3.print();
    return 0;
}