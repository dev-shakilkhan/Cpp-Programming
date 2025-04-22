#include<iostream>
using namespace std;

class Father{
    public:
    virtual void display(){
        cout<<"Father Class"<<endl;
    }
};
class son: public Father{
    // public:
    // void display(){
    //     cout<<"Son Class"<<endl;
    // }
};
class Daughter: public Father{
    public:
    void display(){
        cout<<"Doughter Class"<<endl;
    }
};

int main(){
    Father *p;
    son sobj;
    Daughter dobj;
    p = &sobj;
    p ->display();

    p = &dobj;
    p ->display();

}