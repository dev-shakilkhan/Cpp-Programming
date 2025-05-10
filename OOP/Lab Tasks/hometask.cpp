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
    coord operator+ (int a);
};
coord coord :: operator+ (int a){
    coord temp;
    temp.x = x + a;
    temp.y = y + a;
    temp.z = z + a;
    return temp;
}

int main(){
    coord ob1(10,20,30), ob2;
    cout<<"ob1 = ";
    ob1.print();
    ob2 = ob1 + 100;
    cout<<"ob2 = ";
    ob2.print();

    return 0;
}