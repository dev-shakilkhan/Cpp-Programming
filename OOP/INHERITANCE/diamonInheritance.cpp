#include<iostream>
using namespace std;

class Animal {
    public:
    Animal(){
        cout<<"animal class"<<endl;
    }
};

class live : public Animal {
    public:
    live(){
        cout<<"is live"<<endl;
    }
};

class walk: public Animal{
    public:
    walk(){
        cout<<"this walk"<<endl;
    }
};

class dog: public live, public walk{
    public:
    dog(){
        cout<<"This is dog"<<endl;
    }
};

int main(){
    dog a;
    
}
