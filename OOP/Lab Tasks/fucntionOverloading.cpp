#include<iostream>
using namespace std;

class Father{
    public:
    void display(){
        cout<<"Father Class"<<endl;
    }
};
class son: public Father{
    public:
    void display(){
        cout<<"Son Class"<<endl;
    }
};
class Daughter: public Father{
    public:
    void display(){
        cout<<"Doughter Class"<<endl;
    }
};

int main(){
    Father fobj;
    fobj.display();
    son sobj;
    sobj.display();
    Daughter dobj;
    dobj.display();
}